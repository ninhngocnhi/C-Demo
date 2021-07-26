#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	long long k;
	cin>>n>>m>>k;
	long long ans=0;
	long long a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]*b[j] ==k){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
