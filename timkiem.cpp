#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>> a[i];
		}
		int l=0,r=n-1,check=0;
		while(l<r){
			int tb=(l+r)/2;
			if(a[tb]==k){
				check=1;
				cout<<tb+1<<endl;
				break;
			}
			else if(a[tb]<k){
				l=tb+1;
			}
			else{
				r=tb;
			}
		}
		if(check==0){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


