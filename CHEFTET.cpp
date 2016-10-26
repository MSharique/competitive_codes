#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<utility>
using namespace std;

int arrA[10003];
int arrB[10003];
bool availA[10003];
bool availB[10003];
int target;
vector<int> pos;
map<int,bool> possibility;
//set<int> any_one;
//vector<int> :: iterator it;
map<int,bool> :: iterator its;

void determine_possibility(int n)
{
	int len = pos.size();
	for(int i=0;i<len;i++)
	{
		if(pos[i]==0)
		{
			possibility.insert(make_pair(arrA[0],false));
			possibility.insert(make_pair(arrA[0]+arrB[0] , false));
			possibility.insert(make_pair(arrA[0]+arrB[1] , false));
			possibility.insert(make_pair(arrA[0]+arrB[0]+arrB[1] , false));
		}
		else if(pos[i]==n-1)
		{
			possibility.insert(make_pair(arrA[n-1] , false));
			possibility.insert(make_pair(arrA[n-1]+arrB[n-1] , false));
			possibility.insert(make_pair(arrA[n-1]+arrB[n-2] , false));
			possibility.insert(make_pair(arrA[n-1]+arrB[n-1]+arrB[n-2] , false));
		}
		else
		{
			possibility.insert(make_pair(arrA[pos[i]] , false));
			possibility.insert(make_pair(arrA[pos[i]]+arrB[pos[i]-1] , false));
			possibility.insert(make_pair(arrA[pos[i]]+arrB[pos[i]] , false));
			possibility.insert(make_pair(arrA[pos[i]]+arrB[pos[i]+1] , false));
			possibility.insert(make_pair(arrA[pos[i]]+arrB[pos[i]-1]+arrB[pos[i]] , false));
			possibility.insert(make_pair(arrA[pos[i]]+arrB[pos[i]-1]+arrB[pos[i]+1] , false));
			possibility.insert(make_pair(arrA[pos[i]]+arrB[pos[i]]+arrB[pos[i]+1] , false));
			possibility.insert(make_pair(arrA[pos[i]]+arrB[pos[i]-1]+arrB[pos[i]]+arrB[pos[i]+1] , false));
		}
	}	
}

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		target = -1;
		for(int i=0;i<n;i++)scanf("%d",&arrB[i]);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arrA[i]);
			if(arrA[i] == target)
			{
				pos.push_back(i);
			}
			if(arrA[i] > target)
			{
				pos.clear();
				target = arrA[i];
				pos.push_back(i);
			}
		}
		determine_possibility(n);
		//cout<<"\n possible max num : ";
		//for(its=possibility.begin();its!=possibility.end();its++)cout<<its->first<<" ";cout<<endl;
		if(n==1)cout<<max(arrA[0]+arrB[0] , arrA[0])<<endl;
		else
		{
			int ans = -1;
			for(its=possibility.begin();its!=possibility.end();its++)
			{
				for(int i=0;i<n;i++)availB[i] = false , availA[i] = false;
				for(int i=0;i<n;i++)
				{
					if(i==0)
					{
					//	cout<<"\n i becomes 0 \n";
						if(arrA[i]==its->first)
						{
					//		cout<<"1. "<<arrA[i]<<endl;
					//		its->second = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i]==its->first && !availB[i])
						{
					//		cout<<"2. "<<arrA[i]+arrB[i]<<endl;
					//		its->second = true;
							availB[i] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i+1]==its->first && !availB[i+1])
						{
					//		cout<<"3. "<<arrA[i]+arrB[i+1]<<endl;
					//		its->second = true;
							availB[i+1] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i]+arrB[i+1]==its->first && !availB[i] && !availB[i+1])
						{
					//		cout<<"4. "<<arrA[i]+arrB[i]+arrB[i+1]<<endl;
					//		its->second = true;
							availB[i+1] = true;
							availB[i] = true;
							availA[i] = true;
						}
					//	else break;
					}
					else if(i==n-1)
					{
						if(arrA[i]==its->first)
						{
					//		cout<<"6. "<<arrA[i]<<endl;
					//		its->second = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i]==its->first && !availB[i])
						{
					//		cout<<"7. "<<arrA[i]+arrB[i]<<endl;
					//		its->second = true;
							availB[i] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i-1]==its->first && !availB[i-1])
						{
					//		cout<<"8. "<<arrA[i]+arrB[i-1]<<endl;
					//		its->second = true;
							availB[i-1] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i]+arrB[i-1]==its->first && !availB[i] && !availB[i-1])
						{
					//		cout<<"9. "<<arrA[i]+arrB[i]+arrB[i-1]<<endl;
					//		its->second = true;
							availB[i-1] = true;
							availB[i] = true;
							availA[i] = true;
						}
					//	else continue;
					}
					else
					{
						if(arrA[i]==its->first)
						{
					//		cout<<"10. "<<arrA[i]<<endl;
					//		its->second = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i-1]==its->first && !availB[i-1])
						{
					//		cout<<"11. "<<arrA[i]+arrB[i-1]<<endl;
					//		its->second = true;
							availB[i-1] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i]==its->first && !availB[i])
						{
					//		cout<<"12. "<<arrA[i]+arrB[i]<<endl;
					//		its->second = true;
							availB[i] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i+1]==its->first && !availB[i+1])
						{
					//		cout<<"13. "<<arrA[i]+arrB[i+1]<<endl;
					//		its->second = true;
							availB[i+1] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i-1]+arrB[i]==its->first && !availB[i] && !availB[i-1])
						{
					//		cout<<"14. "<<arrA[i]+arrB[i-1]+arrB[i]<<endl;
					//		its->second = true;
							availA[i] = true;
							availB[i-1] = true;
							availB[i] = true;
						}
						else if(arrA[i]+arrB[i-1]+arrB[i+1]==its->first && !availB[i-1] && !availB[i+1])
						{
					//		cout<<"15. "<<arrA[i]+arrB[i-1]+arrB[i+1]<<endl;
					//		its->second = true;
							availB[i-1] = true;
							availB[i+1] = true;
							availA[i] = true;
						}
						else if(arrA[i]+arrB[i]+arrB[i+1]==its->first && !availB[i] && !availB[i+1])
						{
					//		cout<<"16. "<<arrA[i]+arrB[i]+arrB[i+1]<<endl;
					//		its->second = true;
							availB[i+1] = true;
							availA[i] = true;
							availB[i] = true;
						}
						else if(arrA[i]+arrB[i]+arrB[i-1]+arrB[i+1]==its->first && !availB[i] && !availB[i-1] && !availB[i+1])
						{
					//		cout<<"17. "<<arrA[i]+arrB[i]+arrB[i-1]+arrB[i+1]<<endl;
					//		its->second = true;
							availB[i-1] = true;
							availB[i+1] = true;
							availB[i] = true;
							availA[i] = true;
						}
					//	else break;
						
					}
					
						
				}
				bool check = true;
				for(int i=0;i<n;i++)if(!availA[i]){check = 0;break;}
				if(check)ans = max(ans,its->first);
			}
			cout<<ans<<endl;
		}
		possibility.clear();
		pos.clear();
	}	
	return 0;
}
