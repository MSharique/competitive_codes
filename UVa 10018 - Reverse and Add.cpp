#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;

long long int string_to_num(string str)
{
	long long int num = 0;
	for(int i=0;i<str.length();i++)
	{
		num = num * 10;
		num = num + (str[i]-'0');
	}
	return num;
}

string num_to_string(long long int num)
{
	string str = "";
	while(num)
	{
		int temp = num%10;
		str += (char)(temp+'0');
		num = num/10;
	}
	return str;
}

int main()
{
	ifstream f1;
	ofstream f2;
	f1.open("input.in");
	f2.open("output.out");
	int t;
	long long int first,second;
	//cin>>t;
	f1>>t;
	while(t--)
	{
		second = 0;
		//cin>>first;
		f1>>first;
		long long int temp = first;
		while(temp)
		{
			second = second * 10;
			second = second + (temp%10);
			temp = temp/10;
		}
		first = first + second;
		int cnt = 1;
		string str = num_to_string(first);
		while(!equal(str.begin() , str.begin() + str.size()/2 , str.rbegin()))
		{
			//cout<<" cnt : "<<cnt<<" *** str : "<<str<<" &&& first : "<<first<<endl;
			cnt++;
			first = string_to_num(str);
			reverse(str.begin() , str.end());
			second = string_to_num(str);
			first = first + second;
			str = "";
			str = num_to_string(first);
		}
		cout<<cnt<<" "<<str<<endl;
		f2<<cnt<<" "<<str<<endl;
	}
	f1.close();
	f2.close();
	return 0;
}
