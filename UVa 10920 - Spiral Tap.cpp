#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
	{
		if(n==0 && m==0)break;
		
        int x = n/2+1, y = n/2+1, z, w;
        int sq = (int)sqrt(m);
        if(sq%2 == 0)sq--;
        for(z = sq; z*z < m; z += 2);
        w = z/2;
        x += w;
		y += w;
        int v = z*z;
        if(v - z < m)
		{
            y -= v - m;
		    printf("Line = %d, column = %d.\n", y, x);
    		continue;
        }
		else
       	{
       		y -= z-1;
			v -= z;
			x--;
       	}	
        if(v - z + 1 < m)
		{
            x -= v - m;
    	    printf("Line = %d, column = %d.\n", y, x);
    		continue;
        }
		else
        {
			x -= z-2;
			v -= z-1;
			y++;
        }

        if(v - z + 1 < m)
		{
            y += v - m;
    	    printf("Line = %d, column = %d.\n", y, x);
    		continue;
        }
		else
        {
        	y += z-2;
			v -= z-1;
			x++;
        }
        if(v - z + 1 < m)
		{
            x += v - m;
      	    printf("Line = %d, column = %d.\n", y, x);
    		continue;
        }
		else
        {
        	x += z-2;
			v -= z-1;
        }


    //    end:
    //    printf("Line = %d, column = %d.\n", y, x);
    }
    return 0;
}

