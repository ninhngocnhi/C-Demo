#include <bits/stdc++.h>
using namespace std;
int dem(long long n){
	int dem=0;
	while(n>0){
		dem++;
		n/=10;
	}
	return dem;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int x,y,z,n;
		cin>>x>>y>>z>>n;
		int a=__gcd(x,__gcd(y,z));
		long long b=(x*y*z)/a;
		long long c=b;
		int d1= dem(c);
		if(d1>n){
			cout<<"-1"<<endl;
		}
		else if(d1==n){
			cout<<b<<endl;
		}
		else{
			long long ans, minn=pow(10,n-1);
			if(minn%b==0){
				cout<<minn<<endl;
			}
			else{
				cout<<minn + b-(minn%b)<<endl ;
			}
		}
	}
	return 0;
}
