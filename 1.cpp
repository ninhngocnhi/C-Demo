#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,x,ans=0,s=0;
	cin>>n;
	int a[5]={0};
	while(n--){
		cin>>x;
		a[x]++;
	}
	ans+=a[4]+a[3]+a[2]/2;
	if(a[2]%2) s+=2;
	if(a[3]<a[1]){
		s+=a[1]-a[3];
	}
	ans+=s/4;
	if(s%4) ans++;
	cout<<ans;
	return 0;
}
//Code by Ninh Ngoc

