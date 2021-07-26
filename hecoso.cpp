#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int b;
		long long n;
		cin>>b>>n;
		long long sum=0;
		long long x=1;
		while(n>0){
			int k=n%b;
			sum+=k*k;
			n=n/b;
		}
		cout<<sum<<endl;
	}
	return 0;
}

