#include <bits/stdc++.h>
using namespace std;
int prime(long long n){
	if(-1<n && n<2){
			return 0;
		} 
	else if(n==2){
		return 1;
	}
	else if(n>2){
		int A=1;
		for(int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				A=0;
				break;
			}	
		}
		return A;
	}
}
int ktra(long long n){
	int s=0,check=1;
	while(n>0){
		int t=n%10;
		if(t==0 || t==1 || t==4 || t==6 || t==8 || t==9){
			check=0;
			break;
		}
		s+=t;
		n/=10;
	}
	if(check== 1){
		return prime(s);
	}
	else{
		return 0;
	}
}
int main (){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long minn=min(a,b),maxx=max(a,b);
		long long ans=0;
		for(long long i=minn;i<=maxx;i++){
			long long x=i;
			if(ktra(x)==1){
				if(prime(i)==1){
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


