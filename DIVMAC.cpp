#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
int tree[4*N +1];
int arr[N +1];
int lp[N +1];
vector<int> pr;
int lazy[4*N +1];

/*****************************************************GEGMENT-TREE link***************************************************************

https://www.hackerearth.com/notes/segment-tree-and-lazy-propagation/

*************************************************************************************************************************************/

void init()
{
	for (int i=2; i<=N; ++i)
	{
		if(lp[i] == 0)
		{
			lp[i] = i;
			pr.push_back (i);
		}
		for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
			lp[i * pr[j]] = pr[j];
	}
	lp[1] = 1;
}

void build(int node, int start, int end)
{
//	cout<<"Build ("<<node<<", "<<start<<", "<<end<<")\n";
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = arr[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = max( lp[tree[2*node]] , lp[tree[2*node+1]] );
    }
}

int query(int node, int start, int end, int l, int r)
{
//	cout<<"Query ("<<node<<", "<<start<<", "<<end<<", "<<l<<", "<<r<<")\n";
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(lp[p1],lp[p2]);
}

void updateRange(int node, int start, int end, int l, int r)
{
    // out of range
    if (start > end or start > r or end < l)
        return;

    // Current node is a leaf node
    if (start == end)
    {
        // Add the difference to current node
        tree[node] /= lp[tree[node]];
        return;
    }

    // If not a leaf node, recur for children.
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r);
    updateRange(node*2 + 1, mid + 1, end, l, r);

    // Use the result of children calls to update this node
    tree[node] = max( lp[tree[2*node]] , lp[tree[2*node+1]] );
}

int main()
{
	init();
	int t,n,m,l,r,type;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
	//	cin>>n>>m;
		for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	//	cout<<"\n ARR : \n";
	//	for(int i=0;i<n;i++)cout<<"i = "<<i<<" : ["<<arr[i]<<"]\n";
		
		build(1,0,n-1);
		
	//	cout<<"\n Initial-tree : \n";
	//	for(int i=0;i<4*n;i++)cout<<"i = "<<i<<" : ["<<tree[i]<<"]\n";
		while(m--)
		{
			scanf("%d%d%d",&type,&l,&r);
		//	cin>>type>>l>>r;
			if(type==0)
			{
			//	for(int i=l-1;i<r;i++)arr[i] = arr[i] / lp[arr[i]];	
				updateRange(1,0,n-1,l-1,r-1);
			}
			else
			{
				int result = 1;
				result = max(result, query(1,0,n-1,l-1,r-1));
		//		cout<<result<<" ";
				printf("%d ",result);
			}
	//		cout<<"\n tree...: \n";
	//		for(int i=0;i<4*n;i++)cout<<"i = "<<i<<" : ["<<tree[i]<<"]\n";
		}
	//	cout<<endl;
		printf("\n");
	//	for(int i=0;i<4*n;i++)tree[i] = 0;
	}
	return 0;
}
