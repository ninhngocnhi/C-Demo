#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,d0=0;
		long long k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				d0++;
			}
		}
		int check=0,i=0,j=0;
		long long sum=0;
		while(j<n){
			sum+=a[j];
			j++;
			if(sum>k){
				while(i<n && sum>k){
					sum-=a[i];
					i++;
				}
			}
			if(sum==k && i<j){
				check=1;
				break;
			}
		}
		if(check==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


