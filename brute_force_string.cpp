#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
#define OUTPUT(j) count++
int main()
{
	string str1 , str2;
	cin>>str1>>str2;
	int n = str1.length();
	int m = str2.length();
	cout<<"\n text length = "<<n<<" , pattern langth = "<<m<<endl;
	int count =0 , i , j;
	for (j = 0; j <= n-m; ++j) {
        for (i = 0; i < m && str2[i] == str1[i + j]; ++i);
        if (i >= m) OUTPUT(1);
    }
    cout<<"\n num of occ = "<<count<<endl;
    return 0;
}

