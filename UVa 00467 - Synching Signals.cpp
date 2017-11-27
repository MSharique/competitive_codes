#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<climits>
using namespace std;

vector<int> vec;

int main()
{
//	ofstream f1;
//	f1.open("output.out");
	int num,c=1;
	string input;
	while(getline(cin,input))
	{
		int len = input.length();
		int st=0,end,it,min_time=INT_MAX;
		for(it=0;it<len;it++)
		{
			if(input[it]==' ')
			{
				end = it;
				num = 0;
				while(st<end)
				{
					num = (num * 10) + (input[st++] - '0');
				}
				vec.push_back(num);
				min_time = min(min_time,num);
				st = it+1;
			}			
		}
		end = it;
		num = 0;
		while(st<end)
		{
			num = (num * 10) + (input[st++] - '0');
		}
		vec.push_back(num);
		min_time = min(min_time,num);
		
//		cout<<"\n vector list : ";
//		for(it=0;it<vec.size();it++)cout<<vec[it]<<" ";cout<<endl;
		
		bool flag = false , temp;
        for(int i=min_time;i<=3600;i++)
		{
			temp = true;
            for(int j=0;j<vec.size();j++)
			{
				int temp1 = i/vec[j];
				int temp2 = i%vec[j];
				if(temp1%2==0 and temp2 < vec[j]-5)temp &= true;
				else temp &= false;
            }
            if(temp)
			{
				cout<<"Set "<<c++<<" synchs again at "<<i/60<<" minute(s) and "<<i%60<<" second(s) after all turning green."<<endl;
                flag = true;
                break;
           }
        }
        if(!flag)
		{
			cout<<"Set "<<c++<<" is unable to synch after one hour."<<endl;
    	}
    	vec.clear();
	}
	return 0;
}

