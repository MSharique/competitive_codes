// Given an array of numbers, print only those numbers which have 1, 2 and 3 as digits. 
// the numbers should be sorted and comma separated.

#include<bits/stdc++.h>
using namespace std;

string arr[100005];
set<string> sorted_num;

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		bool one=false, two=false, three=false;
		for(int i=0;i<n;i++)
		{
			one = (arr[i].find("1") != std::string::npos);
			two = (arr[i].find("2") != std::string::npos);
			three = (arr[i].find("3") != std::string::npos);
			if(one and two and three)
				sorted_num.insert(arr[i]);
		}
		for(set<string>:: iterator it=sorted_num.begin(); it != sorted_num.end(); it++)
			cout<< *it << ", " <<endl;
	}
	return 0;
}