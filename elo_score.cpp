#include<iostream>
#include<cstdio>
#include<string>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int t;
	ifstream f1;
	ofstream f2;
	f1.open("rating_score.md");
	f2.open("elo_score.md");
	int num_user,rating_init = 1000 , frating;
	cin>>num_user;
	f2<<setw(20)<<"initial Rating"<<setw(20)<<"score"<<"\t"<<setw(20)<<"expected"<<"\t"<<setw(20)<<"delta(change)"<<"\t"<<setw(20)<<"k*delta"<<setw(20)<<"final rating"<<"\n";
	for(int i=0;i<num_user;i++)
	{
		f1>>t;
		f2<<setw(20)<<rating_init<<"\t";
		f2<<setw(20)<<t<<"\t";
		double expe = 1.0 / (1 + pow (10.0 , abs(298 - t)/400.0 ) );
		f2<<setw(20)<<expe<<"\t";
		//printf("%0.06f \n",expe);
		double st,k=32 ;
		if(t>=298)st = 1.0;
		else if(t>=150)st = 0.5;
		else st = 0.0;
		st = st-expe;
		f2<<setw(20)<<st<<"\t";
		st = st * k;
		f2<<setw(20)<<st<<"\t";
		frating = rating_init + st;
		f2<<setw(20)<<frating<<"\n";
	}
	f1.close();
	f2.close();
	return 0;
}
