#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int check[10];
vector<pair<int,int> > vec ;

int main()
{
	int n,deno;
	bool nume=1,lin=1;
	while(cin>>n)
	{
		nume = 1;
		if(n==0)break;
		if(lin)lin=0;
		else cout<<endl;
		for(int f=0;f<5;f++)
		{
			for(int g=0;g<10;g++)
			{
				if(g!=f)
				{
					for(int h=0;h<10;h++)
					{
						if(h!=f && f!=g)
						{
							for(int i=0;i<10;i++)
							{
								if(i!=f && i!=g && i!=h )
								{
									for(int j=0;j<10;j++)
									{
										if(j!=f && j!=g && j!=h && j!=i)
										{
											int fghij = ((((f*10)+g)*10+h)*10+i)*10 + j;
											int abcde = fghij*n;
											if(abcde < 100000)
											{
												int e = abcde % 10;
												int abcd = abcde / 10;
												int d = abcd % 10;
												int abc = abcd / 10;
												int c = abc % 10;
												int ab = abc / 10;
												int b = ab % 10;
												int a = ab / 10;
												
												for(int clr=0;clr<10;clr++)check[clr]=0;
												check[a]++,check[b]++,check[c]++,check[d]++,check[e]++;
												check[f]++,check[g]++,check[h]++,check[i]++,check[j]++;
												
												deno = -1;
												for(int it = 0;it<10;it++)
												{
													if(check[it]!=1)
													{
														deno = 0;
														break;
													}
												}
												
												if(deno==-1)
												{
													nume = 0;
													cout<<a<<b<<c<<d<<e<<" / "<<f<<g<<h<<i<<j<<" = "<<n<<endl;
												}
												
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if(nume)cout<<"There are no solutions for "<<n<<".\n";
		
	}
	return 0;
}
