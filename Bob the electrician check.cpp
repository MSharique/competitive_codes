#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream f1;
	ifstream f2;
	f1.open("output.out");
	f2.open("input.in");
	int t;
	//cin >> t;
	f2>> t;
	while(t--)
	{
		int n,m,temp;
		long ans=0;
		//cin >> n >> m;
		f2 >> n >> m;
		for(int i=0;i<n;i++)
		{
			f2 >> temp;
		//	cin >> temp;
			temp ^= n;
			ans += __builtin_popcount(temp);
		}

	//	cout << ans << endl;
		f1 << ans << endl;
	}
		f1.close();
	f2.close();
	return 0;
}	
