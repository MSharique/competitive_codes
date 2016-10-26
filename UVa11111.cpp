#include <bits/stdc++.h>
using namespace std;

stack<pair<int,int> > st;
vector<int> vec;

int main()
{
	string str;
	while(getline(cin,str))
	{
		cout<<str<<endl;
		int len = str.length();
		bool neg = false;
		int num=0;
		for(int i=0;i<len;i++)
		{
			cout<<i<<":"<<str[i]<<endl;
			if(str[i]=='-')
				neg = true;
			else if(str[i]==' ')
			{
				// cout<<"here : "<<num<<endl;
				if(neg)vec.push_back(-num);
				else vec.push_back(num);
				num = 0;
				neg = fals	e;
			}
			else num = num*10 + (str[i]-'0');
			// cout<<"i , str[i] ::: "<<i<<",";
		}
		cout<<"after for : "<<num<<endl;
		if(neg)vec.push_back(-num);
		else vec.push_back(num);
		cout<<"All  numbers : ";
		for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";cout<<endl;
		
		vec.clear();
	}
}