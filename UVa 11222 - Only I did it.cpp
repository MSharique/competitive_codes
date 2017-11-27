#include<iostream>
#include<cstdio>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int arr[3][1003];
int buff[3][1003];
int num_prob[3];
int num_prob_f[3];
vector<int> temp;

void comp2arr(int a,int b)
{
	int it1=0,it2=0;
	while(it1<num_prob[a] && it2<num_prob[b])
	{
		if(arr[a][it1] < arr[b][it2])
		{
			temp.push_back(arr[a][it1]);
			it1++;
		}
		else if(arr[a][it1] == arr[b][it2])
		{
			it1++; it2++;
		}
		else
		{
			it2++;
		}
	}
	while(it1<num_prob[a])
	{
		temp.push_back(arr[a][it1]);
		it1++;
	}
}

void temp2arr(int a,int target)
{
	int len = temp.size();
	int it1=0,it2=0,k=0;
	while(it1<len && it2<num_prob[a])
	{
		if(temp[it1] < arr[a][it2])
		{
			buff[target][k++] = temp[it1];
			it1++;
		}
		else if(temp[it1] == arr[a][it2])
		{
			it1++;
			it2++;
		}
		else it2++;
	}
	
	while(it1<len)
	{
		buff[target][k++] = temp[it1];
		it1++;
	}
	num_prob_f[target] = k;
	temp.clear();
}

void determine_prog()
{
	if(num_prob_f[0]>num_prob_f[1] && num_prob_f[0]>num_prob_f[2])
	{
		num_prob[1] = -1;
		num_prob[2] = -1;
	}
	else if(num_prob_f[1]>num_prob_f[0] && num_prob_f[1]>num_prob_f[2])
	{
		num_prob[0] = -1;
		num_prob[2] = -1;
	}
	else if(num_prob_f[2]>num_prob_f[1] && num_prob_f[2]>num_prob_f[0])
	{
		num_prob[0] = -1;
		num_prob[1] = -1;
	}
	else if(num_prob_f[0]==num_prob_f[1] && num_prob_f[0]>num_prob_f[2])
	{
		num_prob[2] = -1;
	}
	else if(num_prob_f[0]==num_prob_f[2] && num_prob_f[0]>num_prob_f[1])
	{
		num_prob[1] = -1;
	}
	else if(num_prob_f[1]==num_prob_f[0] && num_prob_f[1]>num_prob_f[2])
	{
		num_prob[2] = -1;
	}
	else if(num_prob_f[1]==num_prob_f[2] && num_prob_f[1]>num_prob_f[0])
	{
		num_prob[0] = -1;
	}
	else if(num_prob_f[2]==num_prob_f[0] && num_prob_f[2]>num_prob_f[1])
	{
		num_prob[1] = -1;
	}
	else if(num_prob_f[2]==num_prob_f[1] && num_prob_f[2]>num_prob_f[0])
	{
		num_prob[0] = -1;
	}
	else if(num_prob_f[0]==num_prob_f[1] && num_prob_f[0]==num_prob_f[2])
	{
		num_prob[0] = num_prob[1] = num_prob[2] = 0;
	}
}

int main()
{
	//ofstream f1;
	//f1.open("output.out");
	int t,n,id,cs =1;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<3;i++)
		{
			cin>>num_prob[i];
			for(int j=0;j<num_prob[i];j++)cin>>arr[i][j];
			sort(arr[i],arr[i]+num_prob[i]);
		}
		/*
		cout<<"\n input re_check : ";
		for(int i=0;i<3;i++)
		{
			cout<<"\n num_prob by prog num. "<<i+1<<" is = "<<num_prob[i]<<"\n with ids are : ";
			for(int j=0;j<num_prob[i];j++)cout<<arr[i][j]<<" ";cout<<endl;
		}*/
		
		//for prog num 1
		comp2arr(0,1);
		temp2arr(2,0);
		
		//for prog num 2
		comp2arr(1,0);
		temp2arr(2,1);
		
		//for prog num 3
		comp2arr(2,0);
		temp2arr(1,2);
		/*
		cout<<"\n unique problems of each programmer : \n";
		for(int i=0;i<3;i++)
		{
			cout<<"\n prog num. "<<i+1<<" is = "<<num_prob_f[i]<<"\n with ids are : ";
			for(int j=0;j<num_prob_f[i];j++)cout<<buff[i][j]<<" ";cout<<endl;
		}
		*/
		determine_prog();
	//	f1<<"Case #"<<cs<<":\n";
		cout<<"Case #"<<cs++<<":\n";
		for(int i=0;i<3;i++)
		{
			if(num_prob[i]!=-1)
			{
				cout<<i+1<<" "<<num_prob_f[i]<<" ";
	//			f1<<i+1<<" "<<num_prob_f[i]<<" ";
				for(int j=0;j<num_prob_f[i]-1;j++)
				{
					cout<<buff[i][j]<<" ";
	//				f1<<buff[i][j]<<" ";
				}
				cout<<buff[i][num_prob_f[i]-1]<<endl;
	//			f1<<buff[i][num_prob_f[i]-1]<<endl;
			}
		}
	}
	cout<<endl;
	//f1<<endl;
	//f1.close();
}
