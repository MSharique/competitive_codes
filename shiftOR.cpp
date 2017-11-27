#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define OUTPUT(j) count++


int main()
{
	unsigned int j, lim,D; 
   	int i; 
   	unsigned int arr[256];
   	for (i = 0; i < 256; ++i) 
      arr[i] = ~0; 
      unsigned char pat[10];
      cin>>pat;
     int m = 4;
      unsigned char text[50];
      cin>>text;
      int n = 12;
   for (lim = i = 0, j = 1; i < m; ++i, j <<= 1) { 
      arr[pat[i]] &= ~j; 
      lim |= j; 
   } 
   lim = ~(lim>>1);
   
	int count = 0;
   for (D = ~0, j = 0; j < n; ++j) { 
      D = (D<<1) | arr[text[j]]; 
      if (D < lim) 
        OUTPUT(j - m + 1); 
   } 
 	cout<<count<<endl;
	return 0;
}
