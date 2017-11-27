#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
  int x1,y1,x2,y2,t,n,m;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n;
    cin>>m;
    for(int j=0;j<n;j++)
	{
      cin>>x1>>y1>>x2>>y2;
      if((x1==x2)&&(y1==y2))cout<<0<<endl;
      else if(abs(x1-x2)==abs(y1-y2)) cout<<1<<endl;
      else if ((abs(x1-x2)%2)==(abs(y1-y2)%2)) cout << 2<<endl;  
      else cout <<"no move"<<endl;  
    }        
  }
  return 0;
}
