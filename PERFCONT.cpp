#include <bits/stdc++.h>
using namespace std;
// int participant[501];

int main(int argc, char const *argv[])
{
	int t, n, p;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		int cakewalk=0, difficult = 0;
		int half = p/2, temp;
		p = p / 10;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(temp >= half)
				cakewalk++;
			else if(p >= temp)
				difficult++;
		}

		if(cakewalk == 1 && difficult == 2)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}
	return 0;
}