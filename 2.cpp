#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		unsigned long long a,b,c=(n*(n+1))/2,check=1;
		if((m+c)%2==0){
			a=(m+c)/2;
			b=a-m;
			unsigned long long k=__gcd(a,b);
			if(k!=1){
				check=0;
			}
		}
		else{
			check=0;
		}
		if(check==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}


