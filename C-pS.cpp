#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define ll long long

int main()
{
	while(1)
	{
		int n,k;
		cin >> n >> k;
		int A[n];
		for(int i=0;i<n;++i)
			A[i] = i+1;
		bool flag;
		do
		{
			flag = true;
			for(int i=0;i<n;++i)
				if(abs(A[i]-(i+1))<k)
					flag = false;
			if(flag)
				break;
		} while(next_permutation(A,A+n));
		if(flag)
		{
			for(int i=0;i<n;++i)
				cout << A[i] << " ";
			cout << endl;
		}
		else
			cout << "-1" <<  endl;
	}
	return 0;
}
