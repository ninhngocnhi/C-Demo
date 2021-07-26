#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
const long long mod = 1e9+7;
const long long inf = 1e18+7;
long long F[93];
void Fibo(){
	F[1] = 1;
	F[2] = 1;
	for(int i=3;i<=92;i++){
		F[i] = F[i-1] + F[i-2];
	}
}
char xfibo(long long n , long long k){
	if( n == 1) return 'A';
	if( n == 2) return 'B';
	if( k <= F[n-2]) return xfibo(n-2, k);
	return xfibo(n-1, k-F[n-2]);
}
void solve() {
	long long n ,k ;
	cin>>n>>k;
	cout << xfibo(n,k) <<endl;
}
main(){
	int t=1;
	Fibo();
	cin>>t;
	while(t--){
		solve();
	}
}
