#include <bits/stdc++.h>
using namespace std;
int ans(int n,int m){
	if(m<=n) return n-m;
	else{
		if(m%2==0){
			return 1+ans(n,m/2);
		}
		else{
			return 2+ans(n,(m+1)/2);
		}
	}
	
}
int main (){
	int n,m;
	cin>>n>>m;
	cout<<ans(n,m);
	return 0;
}


