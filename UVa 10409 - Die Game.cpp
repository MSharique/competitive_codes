#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    while(cin>>t)
	{
		if(t==0)break;
        int T = 1,D = 6,E = 4,W = 3,N = 2,S = 5,ans;
        for(int i=0;i<t;i++)
		{
            cin>>str;
            switch(str[0])
            {
            	case 'n' : ans = N;
				            N = T;
				            T = S;
				            S = D;
				            D = ans;
				            break;
				case 'e' : ans = T;
			                T = W;
			                W = D;
			                D = E;
			                E = ans;
			          		break;
			    case 'w' : ans = T;
			                T = E;
			                E = D;
			                D = W;
			                W = ans;
			        		break;
			    case 's' :  ans = T;
			                T = N;
			                N = D;
			                D = S;
			                S = ans;
			                break;
			    default : break;
            }
        
		}
        cout<<T<<endl;
    }
    return 0;
}
