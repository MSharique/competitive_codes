#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t, d, n;
	cin>>t;
	while(t--)
	{
		cin>>d>>n;
		while(d--)
		{
			int temp = n;
			int temp2 =  n+1;
			if(temp&1)
				temp2 /= 2;
			else
				temp /= 2;
			n = temp * temp2;
		}
		cout<<n<<endl;
	}
	return 0;
}
