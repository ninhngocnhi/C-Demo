#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long x,y,ans=0;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		long long sum= x+y;
		ans=max(ans,sum);
	}
	cout<<ans;
	return 0;
}

