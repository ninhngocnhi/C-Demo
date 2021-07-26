#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	long long ans=0;
	for(long long i=0;i<n;i++){
		long long s=0;
		double t;
		for(long long j=i;j<n;j++){
			s+=a[j];
			t=(double)s/(double)(j-i+1);
			if(t>=(double)k){
				ans=max(ans,j-i+1);
			}
		}
	}
	cout<<ans;
	return 0;
}


