#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	string a="",b="";
	char t;
	for(int i=0;i<n;i++){
		cin>>t;
		a+=t;
	}
	for(int i=0;i<n;i++){
		cin>>t;
		b+=t;
	}
	a+=a[n-1],b+=b[n-1];
	int ans=0;
	for(int i=0;i<n;i++){
		if(a[i]!= b[i]){
			if(a[i] != a[i+1] && b[i] != b[i+1]){
				i++;
			}
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
