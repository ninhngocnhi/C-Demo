#include <bits/stdc++.h>
using namespace std;
long long tong(long long n){
	long long s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main (){
	long long n;
	cin>>n;
	long long y=n,s1=0,s2;
	s2=tong(y);
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			long long dem=0,x=i;
			while(n%i==0){
				dem++;
				n/=i;
			}
			s1+=dem*tong(x);
		}
	}
	if(n>1){
		s1+=tong(n);
	}
	if(s1==s2){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}


