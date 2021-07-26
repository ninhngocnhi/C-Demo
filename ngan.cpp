#include <bits/stdc++.h>
using namespace std;
long long prime(long long n){
	if(n==0 || n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else{
		int check=1;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				check=0;
				break;
			}
		}
		return check;
	}
}
long long sum(long long n){
	int check1=1;
	int s1=n,s=0;
	while(n>0){
		int x=n%10;
		if(prime(x)==1){
			s+=x;
			n/=10;
		}
		else{
			check1=0;
			break;
		}
	}
	if(check1==1 && prime(s)==1 && prime(s1)==1){
		return 1;
	}
	else return 0;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int dem=0;
		long long a,b;
		cin>>a>>b;
		long long minn=min(a,b),maxx=max(a,b);
		for(int i=minn;i<=maxx;i++){
			if(sum(i)==1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}


