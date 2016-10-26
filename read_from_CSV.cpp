#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<sstream>
#include<map>
#include<utility>
using namespace std;

//vector<string> vec;
//string arr[8] = {"bf" , "kmp" , "tw" , "so" , "raita" , "skip" , "kmpskip" , "askip"};
map<string,int> mp;
int main()
{
	int cnt = 0,temp=1;
	ifstream myfile("posts.csv");
	//ofstream outfile("output.csv");
	//outfile<<"text,";
	/*	
	for(int i=0;i<18;i++)
	{
		outfile<<temp<<",";
		temp = temp * 2;
	}outfile<<endl<<"pattern"<<endl;
	
	temp = 1;
	outfile<<temp<<",";
	
	int it = 1;
	while(it < temp)outfile<<" ," , it = it *2;
	
	int avg_cnt = 18;
	*/
	string str;
	for(int i=0;i<1434;i++)
	{
		cout<<"\n i = "<<i;
		myfile>>str;
		//cout<<str<<"\n";
			
	//	if(str=="Average")
	//	{
			
		//	myfile>>str;
		//	cout<<str<<endl;
		//	myfile>>str;
		//	cout<<str <<endl;
  			stringstream ss(str); 
  			string tok;
  			int it1 = 0;
  			while(getline(ss, tok,','))
  			{
  				if(it1==7)
  				{
  					map<string,int> :: iterator it;
  					it = mp.find(tok);
  					if(it!=mp.end())it->second++;
  					else mp.insert(make_pair(tok,1));
  				}
  				it1++;
  			}
			/*cout<<"\n all numbers : ";
			for(int j=0;j<vec.size();j++)cout<<vec[j]<<" ";cout<<endl;
			str = *min_element(vec.begin(),vec.end());
			cout<<"\n mini : "<<str<<endl;
			//break;
			for(int j=0;j<vec.size();j++)
			{
				if(vec[j]==str)
				{
					cout<<arr[j]<<" / ";
					outfile<<arr[j]<<"/";
				}
			}
			cout<<endl;
			outfile<<",";
			vec.clear();
			cnt++;*/
			
	/*	}
		if(cnt==avg_cnt)
		{
			avg_cnt--;
			cnt = 0;
			temp = temp*2;
			outfile<<endl;
			if(temp==4096)break;
			outfile<<temp<<",";
			int it = 1;
			while(it < temp)outfile<<" ," , it = it *2;
		
		}
		temp = temp * 2;
	*/}
	cout<<"\n Name : Count \n"<<endl;
	for(map<string,int>::iterator it = mp.begin();it!=mp.end();it++)cout<<it->first<<" , "<<it->second<<endl;
//	vec.clear();
	myfile.close();
	mp.clear();
	return 0;
}
