#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

vector<vector<int> > matrix(1000000);
vector<int> input;
vector<int> cipher;

int main()
{
	cout<<endl;
	string str;
	getline(cin,str);
	int it=0,asciii;
	cout<<"\nPlaintext : \n\t"<<str<<endl;

	for(int i=0;i<str.length();i++)
	{
		if(str[i] != ' ')
		{
			if(isalpha(str[i]))
			{
				str[it++] = (char)tolower(str[i]);
				asciii = str[it-1]-'a';
				input.push_back(asciii);
			}
		}
	}
	string temp = str.substr(0,it);
	str = temp;
	cout<<"\nRefined Plaintext : \n\t"<<str<<endl;
	int len;
	cin>>len;
	
	if(str.length()%len!=0)
	{
		cout<<len<<" is not a factor of plaintext length i.e. "<<str.length()<<" \n";
		return 0;
	} 
	
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			cin>>it;
		//	cout<<"\n input it = "<<it<<endl;
			matrix[i].push_back(it);
		}
	}
	cout<<"\nHill cipher matrix : \n";
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
	//multiplication logic
	it = 0;
	for(it = 0;it<str.length();it+=len)
	{
	
		for(int i=0;i<len;i++)
		{
			asciii = 0;
			for(int j=0;j<len;j++)
			{
				asciii += matrix[i][j] * input[j+it];
			//	cout<<"\n multiply "<<matrix[i][j]<<" * "<<input[j+it]<<endl;
			}
		//	cout<<"done\n";
			cipher.push_back(asciii%26);
	//	it = it + len;
		}
	}
	
	temp = "";
	//for(int i=0;i<cipher.size();i++)cout<<cipher[i]<<" ";cout<<endl;
	for(int i=0;i<cipher.size();i++)temp += (char)(cipher[i]+'a');
	cout<<"\nCipher text : \n\t"<<temp<<endl;
	matrix.clear();
	input.clear();
	cipher.clear();
	return 0;
}
