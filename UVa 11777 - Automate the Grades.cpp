#include<bits/stdc++.h>
using namespace std;

int arr[7];

int main()
{
	int t,cs=1;
	char ch;
	double avg;
	
	cin>>t;
	while(t--)
	{
		for(int i=0;i<7;i++)cin>>arr[i];
		sort(arr+4,arr+7);
		avg = arr[6]+arr[5];
		avg = avg/(2.0);
		double sum = 0;
		for(int i=0;i<4;i++)sum += arr[i];
		sum += avg;
		if(sum>=90.0)ch = 'A';
		else if(sum>=80.0)ch = 'B';
		else if(sum>=70.0)ch = 'C';
		else if(sum>=60.0)ch = 'D';
		else ch = 'F';
		cout<<"Case "<<cs++<<": "<<ch<<endl;
	}
	return 0;
}
