 #include<bits/stdc++.h>
	using namespace std;
	
	int arr[100009];

	int main(){
		ofstream f1;
		ifstream f2;
		f1.open("output.out");
		f2.open("input_5.txt");
		int n,q,k,i;
		f2>>n;
		for(i=0;i<n;++i) f2>>arr[i];
		
		f1<<"arr input =: \n";
		for(int it=0;it<n;it++)f1<<arr[it]<<" ";cout<<endl;
		
		sort(arr,arr+n);
		
		f1<<"\n\n\narr After sorting=: \n";
		for(int it=0;it<n;it++)f1<<arr[it]<<" ";cout<<endl;
		
			for(i=1;i<n;++i) arr[i]=arr[i-1]+arr[i];
		f2>>q;
		
		f1<<"n = "<<n<<endl;
		f1<<"\n\n\narr =: \n";
		for(int it=0;it<n;it++)f1<<arr[it]<<" ";cout<<endl;
		f1<<"\nq = "<<q<<endl;
		int cnt = 0;
		while(q--){
			f2>>k;
			int grps=n/(k+1);
			if(n%(k+1)!=0) grps+=1;
			cout<<arr[grps-1]<<endl;
			f1<<arr[grps-1]<<endl;
			cout<<"val of cnt : "<<cnt++<<endl;
		}
		f1<<"cnt == "<<cnt<<endl;
		f1.close();
		f2.close();
		return 0;
	}
