<<<<<<< HEAD
#include <cstdio>

int main()
{
    int n, m, c, t, currentCost, eachCost[21], currentCheck, maxCost, onesOn;
    
    t = 1;
    int test;

    scanf("%d", &test);
    
    while (test--)
    {
        scanf("%d %d %d", &n, &m, &c);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &eachCost[i]);
        }   
        
        currentCost = maxCost = onesOn = 0;
        
        while (m--)
        {
            scanf("%d", &currentCheck);
            
            if (maxCost <= c)
            {
                if (onesOn & (1 << currentCheck))
                    currentCost -= eachCost[currentCheck - 1];
                
                else
                {
                    currentCost += eachCost[currentCheck - 1];
                    if (currentCost > maxCost)
                        maxCost = currentCost;
                }
                    
                onesOn ^= (1 << currentCheck);
            }
        }
        
        // printf("Sequence %d\n", t);
        
        if (maxCost > c)
            printf("-1\n");
        else
            printf("%d\n", maxCost);
        
        ++t;
    }
}
=======
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
/*    ofstream f2;
    f2.open("output.out");
    f2<<1000<<" "<<100000<<endl;
    int num = 1000000000;
	for(int i=0;i<=1000;i++)f2<<num<<" ";
			   
    f2.close();
    //system("pause");
*/
	int a = 7^6^7^9;
	cout<<a;
	return 0;
    }
>>>>>>> 4b753227c8b9346873fe4109c034940fa8363921
