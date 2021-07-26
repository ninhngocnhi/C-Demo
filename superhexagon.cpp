#include<bits/stdc++.h>
using namespace std;
int main(){	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int goc;
		cin>>goc;
		int x=__gcd(goc,180);
		long n=180/x;
		long c=goc/x;
		if(n-c>=2) 
		{
			if(n>=3 && n<=998244353) cout<<n;
			else cout<<"-1";
		}
		else 
		{
			if(2*n>=3 && 2*n<=998244353) cout<<2*n;
			else cout<<"-1";
		}
		cout<<endl;
	}
	return 0;	
}
		
