#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					int s=a[i]+a[j]+a[k];
					if(ans<s && s<=m){
						ans=s;
					}	
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


