#include <bits/stdc++.h>
using namespace std;
 
bool arr[6];
int score[103];
int occ[6];
 
int update()
{
	int mn = 10000,pos = -1;
	for(int i=0;i<6;i++)
	{
		if(arr[i])
		{
			if(occ[i] < mn)
			{
				mn = occ[i];
				pos = i;
			}
		}
	}
 
	for(int i=0;i<6;i++)
	{
		if(arr[i])
		{
			occ[i] -= mn;
		}
	}
 
	arr[pos] = false;
	return mn;	
}
 
void calc_score(int cnt, int it)
{
	if(cnt==4)
	{
		score[it] += ( update() *1);
		return calc_score(cnt-1,it);
	}
	if(cnt==5)
	{
		score[it] += ( update() *2);
		return calc_score(cnt-1,it);
	}
	if(cnt==6)
	{
		score[it] += ( update() *4);
		return calc_score(cnt-1,it);
	}
	return ;
}
 
int main()
{
	int t,n,num,cnt,mx,mn,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			score[i]= temp;
			for(int j=0;j<6;j++)
			{
				arr[j] = false;
				occ[j] = 0;
			}
			for(int j=0;j<temp;j++)
			{
				cin>>num;
				arr[num-1] = true;
				occ[num-1]++;
			}
			cnt = 0;
			for(int j=0;j<6;j++)if(arr[j])cnt++;
			//cout<<"No of cookies available : "<<cnt<<endl;	
			calc_score(cnt,i);
		}
 
		mx = score[0];
		num = 1;
		bool tie = false;
		for(int i=1;i<n;i++)
		{
			if(score[i] > mx)
			{
				mx = score[i];
				num = i+1;
			}
		}
 
		cnt = 0;
		for(int i=0;i<n;i++)if(score[i]==mx)cnt++;
 
		//for(int i=0;i<n;i++)cout<<"Score for player "<<i+1<<" is : "<<score[i]<<endl;	
				
		if(cnt>1)cout<<"tie\n";
		else if(num==1)cout<<"chef\n";
		else cout<<num<<endl;
	}
	return 0;
} 
