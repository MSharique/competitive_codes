#include<stdio.h>
 
int main()
{
	int tc;
	double ve,vy,l,t;		
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%lf%lf%lf%lf",&ve,&vy,&l,&t);
		double ans,temp;
		ans  = l/ve;
		ve = ve + vy;
		temp = l/ve;
		ans = ans - temp;
		if( ans > t)
		{
			ans = 1.0;
			printf("%.7lf\n",ans);
		}
		else
		{
			ans = ans/t;
			printf("%.7lf\n",ans);
		}
	}
	return 0;
}

