#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long ans=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n<3){
			cout<<"0";
		}
		else{
			for(int i=0;i<n-2;i++){
				if(a[i]>= a[i+1] && a[i+1]>=a[i+2]){
					ans++;
				}
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}


