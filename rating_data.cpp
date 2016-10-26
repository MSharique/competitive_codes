#include<iostream>
#include<cstdio>
#include<algorithm>
#include<fstream>
#include<ctime>
#include<map>
using namespace std;

//map<int,int> mp;

int main()
{
	srand(time(NULL));
	ofstream f2;
	f2.open("rating_score.md");
	int num_user;
	long long int sum = 0;
	cin>>num_user;
	/*mp.insert(make_pair(50,0));
	mp.insert(make_pair(75,0));
	mp.insert(make_pair(100,0));
	mp.insert(make_pair(150,0));
	mp.insert(make_pair(200,0));
	mp.insert(make_pair(300,0));
	*/for(int i=1;i<=num_user;i++)
	{
		int temp = rand()%1501;
		f2<<temp<<endl;
		/*sum += temp;
		if(temp<=50)mp[50]++;
		else if(temp<=75)mp[75]++;
		else if(temp<=100)mp[100]++;
		else if(temp<=150)mp[150]++;
		else if(temp<=200)mp[200]++;
		else mp[300]++;
	*/}
	/*f2<<"\n sum = "<<sum<<endl;
	f2<<"\n avg = "<<(sum*1.0)/num_user<<endl;
	f2<<"\n <= 50 ::: "<<mp[50]<<endl;
	f2<<"\n <= 75 ::: "<<mp[75]<<endl;
	f2<<"\n <= 100::: "<<mp[100]<<endl;
	f2<<"\n <= 150::: "<<mp[150]<<endl;
	f2<<"\n <= 200 ::: "<<mp[200]<<endl;
	f2<<"\n <= 300 ::: "<<mp[300]<<endl;
	mp.clear();
	*/f2.close();
	return 0;
}
