#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

long long int arr[103][103], aj[103][103] , ja[103][103] , tarr[103][103];

int main()
{
	/*ifstream f1;
	f1.open("input.in");
	ofstream f2;
	f2.open("output.out");
	*/int t ,test=1, n;
	char N,eq;
	cin>>t;
	//f1>>t;
	while(t--)
	{
		bool symmetric = true;
		int inp;
		cin>>N>>eq>>n;
	//	f1>>N>>eq>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
	//			f1>>arr[i][j];
				cin>>arr[i][j];
				if(arr[i][j] < 0)symmetric = false;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				tarr[i][j]=0;
			}
			tarr[i][n-i-1] = 1;
		}

	//	f2<<"Test #"<<test<<": ";
		cout<<"Test #"<<test++<<": ";
		if(symmetric)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					int sum1 = 0, sum2=0;
					for(int k=0;k<n;k++)
					{
						sum1 = sum1 + arr[i][k] * tarr[k][j];
						sum2 = sum2 + tarr[i][k] * arr[k][j];
					}
					aj[i][j] = sum1;
					ja[i][j] = sum2;
				}
			}
		/*	cout<<"\n input matrix : \n";
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)cout<<arr[i][j]<<" ";
				cout<<endl;
			}
			
			cout<<"\n Counter diagonal matrix : \n";
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)cout<<tarr[i][j]<<" ";
				cout<<endl;
			}
	
			cout<<"\n AJ matrix : \n";
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)cout<<aj[i][j]<<" ";
				cout<<endl;
			}
	
			cout<<"\n JA matrix : \n";
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)cout<<ja[i][j]<<" ";
				cout<<endl;
			}
	*/
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(aj[i][j] != ja[i][j])
					{
						symmetric = false;
						break;
					}
				}
				if(!symmetric)break;
			}
				
		}
		
		if(symmetric)
		{
			cout<<"Symmetric.\n";
	//		f2<<"Symmetric.\n";
		}
		else 
		{
			cout<<"Non-symmetric.\n";
	//		f2<<"Non-symmetric.\n";
		}
	}
/*	f1.close();
	f2.close();
*/	return 0;
}
