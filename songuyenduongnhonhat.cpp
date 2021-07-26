#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long ans=0;
    sort(a,a+n);
	if(k==0){
		if(a[0]==1){
			ans=-1;
		}
		else{
			ans=1;
		}
	}
	else if(k==n){
		ans=a[n-1];
	}
	else{
		if(a[k-1]==a[k]){
			ans=-1;
		}
		else{
			ans=a[k-1];
		}
	}
	cout<<ans;
	return 0;
}
