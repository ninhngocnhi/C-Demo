#include <bits/stdc++.h>
using namespace std;
int main (){
	int c,n;
	cin>>c>>n;
	int w[n];
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	int a[n]={0};
	a[n-1]=1;
	int stop=0;
	long long ans=0;
	while(stop==0){
		long long sum=0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				sum+=w[i];
			}
		}
		if(sum<=c){
			ans=max(ans,sum);
		}
		int i=n-1;
		while(i>=0 && a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==-1){
			stop=1;
		}
		else{
			a[i]=1;
		}
	}
	cout<<ans;
	return 0;
}


