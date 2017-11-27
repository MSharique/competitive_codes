#include<bits/stdc++.h>
using namespace std;

int arr[100009];

int main(){
	
	FILE *op,*ip;
    op=fopen("output_5.txt","w");
    ip=fopen("input_5.txt","w");
    
    int n,q,k,i;
    n=100000;
    fprintf(ip,"%d\n",n);
    for(i=0;i<n;++i){
    	arr[i]=rand()%10000+1;
    	fprintf(ip,"%d ",arr[i]);
	} 
	fprintf(ip,"\n");
    sort(arr,arr+n);
    for(i=1;i<n;++i) arr[i]=arr[i-1]+arr[i];
    q=100000;
    fprintf(ip,"%d\n",q);
    int count=0;
    while(q--){
    	k=count; ++count;
    	fprintf(ip,"%d\n",k);
        int grps=n/(k+1);
        if(n%(k+1)!=0) grps+=1;
        fprintf(op,"%d\n",arr[grps-1]);
    }
    return 0;
}

