#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n],sum=0,maxx=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		maxx=max(maxx,a[i]);
	}
	long long ans= sum/(n-1);
	if(sum%(n-1)!=0){
		ans++;
	}
	cout<<max(maxx,ans);
	return 0;
}


