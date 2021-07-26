#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0,check=1;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1]){
			check++;
			ans=max(ans,check);
		}
		else{
			check=1;
		}
	}
	cout<<ans;
	return 0;
}


