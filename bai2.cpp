#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	long long a[92];
	a[0]=1,a[1]=1;
	for(int i=2;i<92;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<92;i++){
		cout<<a[i]<<endl;
	}
//	while(t--){
//		int n;
//		cin>>n;
//		cout<<a[n-1]<<endl;
//	}
	return 0;
}


