#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

map<pair<char,char> ,long long int > mp;
map<pair<char,char> ,long long int > :: iterator it;

int main()
{
    //cout << "Hello World!" << endl;
    int len,q;
    long long int ans,cnt;
    char str[1000003];
    char st,end;
    scanf(" %d %s %d ",&len,&str,&q);
    while(q--)
    {
    	scanf(" %c %c",&st,&end);
    	ans = cnt = 0;
    	if(st < end)
    	{
    		it = mp.find(make_pair(st,end));
    		if(it==mp.end())
    		{
    			if(st != end)
    			{
    				for(int i=len-1;i>=0;i--)
    				{
    					if(str[i]==end)cnt++;	
    					if(str[i]==st)ans += cnt;
    				}
    				cnt = 0;
    				for(int i=len-1;i>=0;i--)
    				{
    					if(str[i]==st)cnt++;
    					if(str[i]==end)ans += cnt;
    				}
    			}
    			else
    			{
    				int single = 0;
    				for(int i=len-1;i>=0;i--)
    				{
    					if(str[i]==end)cnt++,single++;
    					if(str[i]==st)ans += cnt;
    				}
    				ans = ans - single;
    			}
    			mp.insert(make_pair(make_pair(st,end) , ans));
    			printf("%lld\n",ans);
    		}
    		else
    		{
    			printf("%lld\n",it->second);
    		}
    	}
    	else
    	{
    		it = mp.find(make_pair(end,st));
    		if(it==mp.end())
    		{
    			if(st != end)
    			{
    				for(int i=len-1;i>=0;i--)
    				{
    					if(str[i]==end)cnt++;	
    					if(str[i]==st)ans += cnt;
    				}
    				cnt = 0;
    				for(int i=len-1;i>=0;i--)
    				{
    					if(str[i]==st)cnt++;
    					if(str[i]==end)ans += cnt;
    				}
    			}
    			else
    			{
    				int single = 0;
    				for(int i=len-1;i>=0;i--)
    				{
    					if(str[i]==end)cnt++,single++;
    					if(str[i]==st)ans += cnt;
    				}
    				ans = ans - single;
    			}
    			mp.insert(make_pair(make_pair(st,end) , ans));
    			printf("%lld\n",ans);
    		}
    		else
    		{
    			printf("%lld\n",it->second);
    		}		
    	}
    	
    }
    mp.clear();
    return 0;
}

