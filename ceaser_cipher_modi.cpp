#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout<<endl;
	string str;
	getline(cin,str);
	int key;
	cin>>key;
	cout<<"\n\nPlaintext : \n\t"<<str<<endl;
	cout<<"\n\nkey used : \n\t"<<key<<endl;
	for(int i=0;i<str.length();i++)str[i] = (char)(str[i]+key);
	cout<<"\n\nEncrypted text : \n\t"<<str<<endl;
	for(int i=0;i<str.length();i++)str[i] = (char)(str[i]-key);
	cout<<"\n\nDecrypted text : \n\t"<<str<<endl;
	return 0;
}
