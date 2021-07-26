#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n],b[n];
	long long ans=10000000000;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			if(a[i]<a[j]){
				for(int k=j+1;k<n;k++){
					if(a[j]<a[k]){
						ans=min(ans,b[i]+b[j]+b[k]);
					}
				}
			}
		}
	}
	if(ans<10000000000){
		cout<<ans;
	}
	else{
		cout<<"-1";
	}
	return 0;
}


