#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
	srand(time(NULL));
	ofstream f1;
	f1.open("input.in");
	f1<<100<<endl;
	int num,temp,it;
	for(int i=10;i<=10000;i*=10)
	{
		 for(int k=0;k<25;k++)
		 {
		 	 it = rand()%i + 1;
			 f1<<it<<endl;
			 for(int j=0;j<it;j++)
			 {
			 	num = rand()%1000 + 1 ;
				temp = rand()%1000 + 1;
				f1<<num<<" "<<temp<<endl; 	
			 }
		 }
	}
	return 0;
}
