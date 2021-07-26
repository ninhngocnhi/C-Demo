#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	int r=n-1,l=0,check=0,mid;
	while(l<=r){
		mid= (l+r)/2;
		if(a[mid]==k){
			break;
		}
		else if(a[mid]<k){
			l=mid;
		}
		else{
			r=mid;
		}
	}
	cout<<mid;
	return 0;
}


