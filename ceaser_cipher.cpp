#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout<<endl;
	string str;
	getline(cin,str);
	int key =3;
	cout<<"\n\nPlaintext : \n\n\t"<<str<<endl<<endl;
	cout<<"key used : "<<key<<endl<<endl;
	for(int i=0;i<str.length();i++)str[i] = (char)(str[i]+key);
	cout<<"Encrypted text : \n\n\t"<<str<<endl<<endl;
	for(int i=0;i<str.length();i++)str[i] = (char)(str[i]-key);
	cout<<"Decrypted text : \n\n\t"<<str<<endl<<endl;
	return 0;
}
