#include <bits/stdc++.h>
using namespace std;

string forgotten_words[101];
string phrase[100001];

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string ans = "", inp = "";
		int n,k, l;
		cin>>n>>k;
		for(int i=0; i<n;i++)
			cin>>forgotten_words[i];
		int it = 0;
		for(int i=0;i<k;i++)
		{
			cin>>l;
			while(l--)
			{
				cin>>inp;
				phrase[it++] = inp;
			}
		}
		for(int i=0;i<n;i++)
		{
			bool found = false;
			for(int j=0; j<it;j++)
			{
				if(forgotten_words[i] == phrase[j])
				{
					found = true;
					break;
				}
			}

			if(found)
				ans += "YES ";
			else
				ans += "NO ";

		}
		cout<<ans<<endl;
	}
	return 0;
}