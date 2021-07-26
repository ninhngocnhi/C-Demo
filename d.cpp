#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=100000;
	for(int i=0;i<n-2;i++){
		if((a[i])&(a[i+1]) !=0){
			for(int j=i+2;j<n;j++){
				long long x=a[j],y=a[j-1],z=x&y;
				if(z){
					long long m=a[j],n=a[i],q=m&n;
					if(q){
						ans=min(ans,j-i+1);
						break;
					}
				}
				else{
					break;
				}
			}
		}
	}
	if(ans==100000) ans=-1;
	cout<<ans;
	return 0;
}


