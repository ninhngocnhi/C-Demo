#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n;
	cin>>n;
	long long ans=1;
	for(int i=2; i <= sqrt(n);i++){
		if(n%i==0){
			ans*=i;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1){
		ans*=n;
	}
	cout<<ans;
	return 0;
}


