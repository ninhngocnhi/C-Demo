#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	long long k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int b=n/2+1;
	while(1){
		for(int i=b;i<n;i++){
			if(a[i]==a[n/2]){
				b++;
			}
			else{
				break;
			}
		}
		if(b==n){
			a[n/2]+= k/(n-n/2);
			break;
		}
		else{
			long long x=a[b]-a[n/2];
			long long y=b-n/2;
			long long z=k/y;
			if(z==0){
				break;
			}
			else{
				long long minn=min(x,z);
				for(int i=n/2;i<b;i++){
					a[i]+=minn;
				}
				k-= minn*y;
			}
			if(k==0){
				break;
			}
		}
	}
	cout<<a[n/2];
	return 0;
}
