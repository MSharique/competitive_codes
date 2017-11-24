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