#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<map>
#include<utility>
#include<cctype>
using namespace std;

char mat[5][5];
bool occ[26];
map<char , pair<int,int> > mp;
map<char , pair<int,int> > :: iterator iterat;
int main()
{
	cout<<endl;
	string text,key,ke;
	getline(cin,text);
	getline(cin,ke);
	cout<<"\nPlaintext : \n\t"<<text<<endl;
	cout<<"\nkey used : \n\t"<<ke<<endl;
	key = "";
	for(int i=0;i<ke.length();i++)
	{
		if(ke[i]=='j')ke[i] = 'i';
		if(ke[i]!=' ' && !occ[ke[i]-'a'])key += ke[i] , occ[ke[i]-'a'] = true;
	}	
	cout<<"\nRefined key : \n\t"<<key<<endl;
	for(int i=0;i<26;i++)occ[i] = false;
	occ['j'-'a'] = true;
	int it = 0,ito;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(it < key.length())
			{
				mat[i][j] = key[it++];
				mp.insert(make_pair(mat[i][j], make_pair(i,j)));
				occ[mat[i][j]-'a'] = true;
			}
			else if(it == key.length())
			{
				ito = 0;
				while(occ[ito])ito++;
				mat[i][j] = (char)(ito+'a');
				mp.insert(make_pair(mat[i][j], make_pair(i,j)));
				occ[ito] = true;
				while(occ[ito])ito++;
				it++;
			}
			else
			{
				mat[i][j] = (char)(ito + 'a' );
				mp.insert(make_pair(mat[i][j], make_pair(i,j)));
				occ[ito++] = true;
				while(occ[ito])ito++;
			}
		}
	}
	cout<<"\nPlay fair matrix : \n";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
	ke = "";
	ke += (char)tolower(text[0]);
	for(int i=1;i<text.length();i++)
	{
		if(isalpha(text[i]))
		{
			if(text[i]==text[i-1])ke += 'x';
			else ke += (char)tolower(text[i]);	
		}
	}
	if(ke.length()&1)ke += 'x';
	cout<<"\nRefined Plaintext : \n\t"<<ke<<endl;
	/*for(iterat=mp.begin();iterat!=mp.end();iterat++)
	{
		cout<<iterat->first<<" -> ("<<iterat->second.first<<" , "<<iterat->second.second<<" )\n";
	}*/
	text = ke;
	ke = "";
	for(int i=0;i<text.length();i+=2)
	{
		int x1,x2,y1,y2;
		iterat = mp.find(text[i]);
		x1 = iterat->second.first;
		y1 = iterat->second.second;
		iterat = mp.find(text[i+1]);
		x2 = iterat->second.first;
		y2 = iterat->second.second;
		
		if(x1!=x2 && y1!=y2)
		{
			ke += mat[x1][y2];
			ke += mat[x2][y1];
		}
		else if(x1==x2 && y1!=y2)
		{
			ke += mat[x1][(y1+1)%5];
			ke += mat[x2][(y2+1)%5];
		}
		else if(x1!=x2 && y1==y2)
		{
			ke += mat[(x1+1)%5][y1];
			ke += mat[(x2+1)%5][y2]; 
		}
	}
	cout<<"\nEncrypted text : \n\t"<<ke<<endl;
	mp.clear();
	return 0;
}
