#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin>>n>>m;
	if(n==m){
		cout<<n-1<<" "<<n;
	}
	else if(n>m){
		cout<<n-1<<" "<<m;
	}
	else{
		cout<<m-1<<" "<<n;
	}
	return 0;
}


