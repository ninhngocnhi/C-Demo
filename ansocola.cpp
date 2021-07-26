#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n,k;
	cin>>n>>k;
	long long denta= 9+8*(n+k);
	long long add=(-3+sqrt(denta))/2;
	long long ans= n-add;
	cout<<ans;
	return 0;
}


