#include<iostream>
#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;

set<int> st;

void func(int mat[3][3])
{
	cout<<"\n mat here : \n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	//row sum
	int sum = 0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)sum = sum + mat[i][j];
	//	cout<<"\n sum for "<<i<<"th row : "<<sum<<endl;
		st.insert(sum);
		sum = 0;
	}
	//col sum
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)sum += mat[j][i];
	//		cout<<"\n sum for "<<i<<"th col : "<<sum<<endl;
		st.insert(sum);
		sum = 0;
	}
	//diag sum
	for(int i=0;i<3;i++)
	{
		sum += mat[i][i];
	}
		st.insert(sum);
	//opp diag
	sum = mat[0][2] + mat[1][1] + mat[2][0];
	st.insert(sum);
}

int main()
{
	int arr[3][3];
	cout<<"\n enter ele for 3*3 mat : ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	func(arr);
	if(st.size()==1)cout<<"\n\n 3 by 3 magic square \n";
	else cout<<"\n Not a magic square \n";
	return 0;
}
