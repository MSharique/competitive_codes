#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

string str , str1;
int col;

vector<vector<char> > vec(100003);
int order[100003];
	
	
void encrypt()
{
	// your code goes here

	
	int len = str.length();
	for(int i=0;i<len;)
	{
		for(int j=0;j<col;j++)
		{
			if(str[i]!=' ')
			{
				vec[j].push_back(str[i]);
			//	cout<<"\n j = "<<j<<" , i = "<<i<<endl;
			}
			if(str[i]==' ')j--;
			i++;
			if(i==len)break;
		}
	}
	//generate permutation
	int occur = rand()%100;
	cout<<"\nOper gene : \n\t"<<occur<<endl;
	for(int i=0;i<col;i++)order[i]=i;
	while(occur--)
	{
		next_permutation(order,order+col);
	}
	cout<<"\nOrder : \n\t";
	for(int i=0;i<col;i++)cout<<order[i]<<" ";cout<<endl;
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<vec[order[i]].size();j++)cout<<vec[order[i]][j];
		cout<<endl<<endl;
	}
}


int main()
{
	//cout<<"1\n";
		srand(time(NULL));
		cout<<endl;
	getline(cin,str);
	cout<<"\nPlaintext : \n\t"<<str<<endl;
	cin>>col;
	cout<<"\nNo of col : \n\t"<<col<<endl;

	encrypt();
	
	str1 = "";
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<vec[order[i]].size();j++)str1 += vec[order[i]][j];
	}
	for(int i=0;i<col;i++)vec[i].clear();
	cout<<"\nCalling with str : \n\t"<<str1<<endl;
	str = str1; 
	encrypt();
	return 0;
}
