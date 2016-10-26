#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	ofstream f1;
	f1.open("output.out");
	int num;
	string input;
	string str[15];
	int spacecnt[15];
	while(getline(cin,input))
	{
		num = 0;
		for(int i=input.length()-1 ; i>=0 ; i--)num = (num * 10) + (input[i] - '0');
		if(num==0)break;
		int minspace = 25;
		//cout<<"\n num = "<<num<<endl;
		for(int i=0;i<num;i++)
		{
			getline(cin,str[i]);
		//	cout<<"\n input str = "<<str[i]<<endl;
			int cnt = 0;
			for(int j=0;j<25;j++)if(str[i][j]==' ')cnt++;
			minspace = min(minspace,cnt);
			spacecnt[i]  = cnt;
		}
		int ans = 0;
		for(int i=0;i<num;i++)
		{
			ans += ( spacecnt[i] - minspace);
		}
		cout<<ans<<endl;
		f1<<ans<<endl;
	}
	return 0;
}

