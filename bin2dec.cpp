#include<iostream>
using namespace std;
#define OUTPUT(j) count++

int main()
{
	int count = 0;
	OUTPUT(1);
	cout<<count<<endl;
	OUTPUT(0);
	cout<<count<<endl;
	OUTPUT(-5);
	cout<<count<<endl;
	return 0;
}
