#include <bits/stdc++.h>
using namespace std;

bool is_alternate(int a, int b)
{
	if((a<0 and b>=0) || (a>=0 and b<0))
		return true;
	return false;
}


int main(int argc, char const *argv[])
{
	int t, n, temp;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		vector<int> numbers(n);
		vector<int> sub_array(n, 1);
		for(int i=0; i<n; i++)
		{
			cin>>temp;
			numbers[i] = temp;
		}

		for(int i=n-2; i>=0; i--)
		{
			if(is_alternate(numbers[i], numbers[i+1]))
				sub_array[i] = sub_array[i+1]+1;
		}

		for(int i=0; i<n;i++) 
		{
			cout<<sub_array[i]<<" ";
		}
		cout<<endl;
		numbers.clear();
		sub_array.clear();
	}
	return 0;
}