#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

bool check(int arrr[],int size,int key)
{
	if(binary_search(arrr , arrr+size , key))return true;
	else return false;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	if(check(arr,9,5))cout<<"\n found";
	else cout<<"\n not found";
	return 0;
}
