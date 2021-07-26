#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[2*n];
	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}
	long long ans=0;
	for(int i=0;i<2*n-1;i++){
		if(a[i]!=0){
			int d=0;
			for(int j=i+1;j<2*n;j++){
				if(a[j]==0){
					d++;
				}
				else if(a[j]==a[i]){
					ans+= j-i-1-d;
					a[j]=0;
					break;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}


