#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	int b[3000]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]-1]++;
	}
	int ans=n+1;
	for(int i=0;i<3000;i++){
		if(b[i]==0){
			ans=i+1;
			break;
		}
	}	
	cout<<ans;
	return 0;
}


