#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout<<endl;
	string str,st;
	getline(cin,str);
	int key ;
	cin>>key;
	cout<<"\nPlaintext :\n\t"<<str<<endl<<endl;
	cout<<"\ndepth : \n\t"<<key<<endl<<endl;
	st = "";
	for(int i=0;i<str.length();i++)
	{
		//cout<<str[i];
		if(isalpha(str[i]))st += str[i];
	}
	cout<<"\nRefined Plaintext : \n\t"<<st<<endl;
	if(key==1)
	{
		cout<<"\nCipher text : \n\t"<<st<<endl<<endl;
		return 0;
	}
	str = "";
	int down = 2*(key-1)-3 , up = 1;
	for(int i=0;i<st.length();i+=down+3)
	{
		str += st[i];
		int temp = down+2;
//		cout<<st[i];
	//	while(temp--)cout<<".";	
	}
	cout<<endl;
	for(int i=1;i<key-1;i++)
	{
		bool first = true;
		int temp = up;
	//	while(temp--)cout<<"."; 
		for(int j=i;j<st.length();)
		{
			//cout<<j<<endl;
			if(first)str = str + st[j];
//			cout<<st[j];
			temp = down;
	//		while(temp--)cout<<".";
			j = j + down + 1;
			if(j>=st.length())break;
			//cout<<j<<endl;
			str = str + st[j];
//			cout<<st[j];
			j = j + up + 1;
			temp = up;
	//		while(temp--)cout<<".";
			if(j>=st.length())break;
			//cout<<j<<endl;
			str = str + st[j];
		//	j = j + up;
			first = false;
		}
	//	cout<<endl;
		if(down==1)down = down - 1;
		else down = down - 2;
		if(up==0)up = up + 1;
		else up = up + 2;
	}
	down = 2*(key-1);
	int temp = down-2;
	//while(temp--)cout<<".";
	for(int i=key-1;i<st.length();i+=down)
	{
		str += st[i];
//		cout<<st[i];
		int temp = down;
	//	while(temp--)cout<<".";	
	}
	cout<<"\nCipher text : \n\t"<<str<<endl;
	return 0;
}
