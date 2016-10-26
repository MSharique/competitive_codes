#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int compare_version(string A , string B)
{
	istringstream str1(A);
    istringstream str2(B);
    
    vector<string> fir;
    vector<string> sec;
    string pat;
    
    while(getline(str1 , pat,'.'))
    {
        stringstream temp;
        temp << pat;
        string x;
        temp >> x;
        int it = 0 , l =x.length();
        while(x[it]=='0')it++;
        if(it!=l)x = &x[it];
        else x  = '0';
        fir.push_back(x);
    }
    
    while(getline(str2 , pat,'.'))
    {
        stringstream temp;
        temp << pat;
        string x;
        temp >> x;
        int it = 0 , l =x.length();
        while(x[it]=='0')it++;
        if(it!=l)x = &x[it];
        else x  = '0';
        sec.push_back(x);
    }
    
    int lenA = fir.size();
    int lenB = sec.size();
    
    cout<<"\n vector 1 : ";
    for(int i=0;i<lenA;i++)cout<<fir[i]<<" ";cout<<endl;
    cout<<"\n vector 2 : ";
    for(int i=0;i<lenB;i++)cout<<sec[i]<<" ";cout<<endl;
    
    for(int i=0;i<min(lenA, lenB) ; i++)
    {
		if( fir[i].length() > sec[i].length())return 1;
        if( sec[i].length() > fir[i].length())return -1;
        for(int j=0;j<fir[i].length();j++)
        {
        	if(fir[i][j] > sec[i][j])return 1;
        	if(fir[i][j] < sec[i][j])return -1;
        }
    }
    
    if(lenA < lenB)
    {
        for(int i=lenA;i<lenB;i++)
        {
        	int len = sec[i].length();
        	for(int j=0;j<len;j++)
            if((sec[i][j]-'0') != 0)return -1;
        }
        return 0;
    }
    
    if(lenA > lenB)
    {
        for(int i=lenB;i<lenA;i++)
        {
        	int len = fir[i].length();
            for(int j=0;j<len;j++)
			if(fir[i][j]-'0' != 0)return 1;
        }
        return 0;
    }
 
    if(lenA == lenB)return 0;
    
}

int main()
{
	string A,B;
	cin>>A>>B;
	cout<<compare_version(A,B);
	//A = &A[3];
	//cout<<A;
	return 0;
}
