#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	srand(time(NULL));
	cout<<endl;
	int col;
	string str;
	getline(cin,str);
	//cout<<"\n str = "<<str<<endl;
	cin>>col;
	vector<vector<char> > vec(col);
	cout<<"\nPlaintext :\n\t"<<str<<endl;
	cout<<"\nNum of columns : \n\t"<<col<<endl;
	int len = str.length();
	for(int i=0;i<len;)
	{
		for(int j=0;j<col;j++)
		{
			if(str[i]!=' ')
			{
				vec[j].push_back(str[i]);
				//cout<<"\n j = "<<j<<" , i = "<<i<<endl;
			}
			if(str[i]==' ')j--;
			i++;
			if(i==len)break;
		}
	}
	//generate permutation
	int occur = rand()%100;
	//cout<<"\n oper gene = "<<occur<<endl;
	int order[col];
	for(int i=0;i<col;i++)order[i]=i;
	while(occur--)
	{
		next_permutation(order,order+col);
	}
	cout<<"\nCol permutationn : \n\t";
	for(int i=0;i<col;i++)cout<<order[i]<<" ";cout<<endl;
	cout<<"\nEncrypted text :\n\n";
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<vec[order[i]].size();j++)cout<<vec[order[i]][j];
		//for(int j=0;j<vec[i].size();j++)cout<<vec[i][j];
		cout<<"\n\n";
	}
	cout<<endl;
	return 0;
}
