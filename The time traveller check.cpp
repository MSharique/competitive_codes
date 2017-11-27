#include <iostream>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long int x,y,ans=0;
		cin >> x >> y;
		while((x&-x)!=x)
		{
			x >>= 1;
			ans++;
		}
		while(x<y)
		{
			x <<= 1;
			ans++;
		}
		while(x>y)
		{
			x >>= 1;
			ans++;
		}

		cout << ans << endl;
	}
	return 0;
}
