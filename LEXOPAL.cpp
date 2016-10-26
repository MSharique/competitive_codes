#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	bool palin;
	string str;
	
	cin>>t;
	while(t--)
	{
		cin>>str;
		palin = true;
		int i = 0;
		int j = str.length()-1;
		while(i<=j)
		{
			if(str[i]==str[j])
			{
				if(str[i]=='.')str[i]=str[j]='a';
			}
			else
			{
				if(str[i]=='.')str[i] = str[j];
				else if(str[j]=='.')str[j] = str[i];
				else palin = false;
			}
			
			if(!palin)break;
			i++;
			j--;	
		}
		if(palin)cout<<str<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
