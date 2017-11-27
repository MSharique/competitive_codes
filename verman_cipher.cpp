#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
	string str;
	cout<<endl;
	getline(cin,str);
	string key;
	cout<<endl;
	getline(cin,key);
	cout<<"\nPlaintext :\n\t"<<str<<endl;
	cout<<"\nKey :\n\t"<<key<<endl;
	int it=0;
	for(int i=0;i<str.length();i++)
	{
		if(isalpha(str[i]))
		{
			str[it++] = str[i];
		}
	}
	//cout<<"start : "<<str.begin()+it<<" , to len : "<<str.length()-it<<endl;
	//cout<<"it = "<<it<<endl;
	//str.erase(it , len1-it-1);
	string x = str.substr(0, it);
	str = x;
	//cout<<"\nRefined str : "<<str<<" , x = "<<x<<",  len = "<<x.length() <<endl;
	if(str.length() != key.length())
	{
		cout<<"\nLength must be equal";
		return 0;
	}
	for(int i=0;i<str.length();i++)str[i] = (char)toupper(str[i]);
	cout<<"\nRefined str :\n\t"<<str<<endl;
	for(int i=0;i<key.length();i++)key[i] = (char)toupper(key[i]);
	cout<<"\nKey :\n\t"<<key<<endl;
	string encrypt="";
	int temp;
	for(int i=0;i<str.length();i++)
	{
		temp = str[i]-'A' + key[i]-'A' ;
		if(temp > 25)temp -= 25;
		encrypt += (char)( temp +'A' );
	}
	cout<<"\nEncrypted text :\n\t"<<encrypt<<endl<<endl;
	return 0;
}
