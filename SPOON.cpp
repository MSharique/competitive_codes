#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cctype>
#include<vector>
using namespace std;

char arr[101][101];
char trans[101][101];
string str;
vector<string> vec;

int main()
{
	int t,r,c;
	cin>>t;
	while(t--)
	{
		cin>>r>>c;
		for(int i=0;i<r;i++)
		{
			cin>>str;
			for(int j=0;j<c;j++)
			{
				str[j] = (char)tolower(str[j]);
				trans[j][i] = str[j];
			}
			vec.push_back(str);
		}
		/*cout<<"\n input check : \n";
		cout<<"\n arr matrix : \n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\n trans matrix : \n";
		*/for(int i=0;i<c;i++)
		{
			str = "";
			for(int j=0;j<r;j++)
			{
		//		cout<<trans[i][j]<<" ";
				str += trans[i][j];
			}
		//	cout<<endl;
			vec.push_back(str);
		}
		bool flag = false;
		size_t found;
		r = vec.size();
		for(int i=0;i<r;i++)
		{
			found = vec[i].find("spoon");
			if(found!=string::npos)flag=true;
		}
		if(flag)cout<<"There is a spoon!\n";
		else cout<<"There is indeed no spoon!\n";
		vec.clear();
	}
	return 0;
}
