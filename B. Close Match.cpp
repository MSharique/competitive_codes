#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    ifstream f1;
    ofstream f2;
    f1.open("A-large.in");
    f2.open("output.out");
    int c=1,t;
    string coder,jammer;
    f1>>t;
    while(c<=t)
    {
    	f2<<"Case #"<<c++<<": ";
    	f1>>coder>>jammer;
    	int len = coder.length();
    	int diff = 1;
    	for(int i=len-1;i>=0;i--)
    	{
    		if(coder[i]=='?' && jammer[i]!='?')coder[i] = jammer[i];
    		if(coder[i]!='?' && jammer[i]=='?')jammer[i] = coder[i];
    		
    	}
    }
    f1.close();
    f2.close();
    return 0;
    }
