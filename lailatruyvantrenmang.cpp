#include <bits/stdc++.h>
#define N 1000000007
using namespace std;
int phi(long long n) {
	int result = n;
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0) {
			while(n % i == 0)
			n /= i;
			result -= result / i;
		}
	if(n > 1)
	result -= result / n;
	return result % N;
}
int main (){
	string str1 = "MULTIPLY";
	string str2 = "TOTIENT";
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=q;j++){
		string s;
		cin>>s;
		if(s.compare(str1) == 0 ){
			int l,r,x;
			cin>>l>>r>>x;
			for(int i=l ; i<=r; i++){
				a[i]*=x;
			}
		}
		else if( s.compare(str2) == 0 ){
			int l,r;
			cin>>l>>r;
			long long sum=1;
			for(int i=l ; i<=r; i++){
				sum*=a[i];
			}
			cout<< phi(sum)<<endl;
		}			
	}
	return 0;
}

