#include <bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y) { 
	return (!y) ? x : gcd(y, x%y); 
}
int main (){
	int t;
	cin>>t;
	int i=1;
	while(t--){
		long long x,y,z,t;
		cin>>x>>y>>z>>t;
		long long a=x/gcd(x,y),b=y/gcd(x,y),c=z/gcd(z,t),d=t/gcd(z,t);
		long long k=b*d/gcd(b,d);
		long long a1=a*k/b,c1=c*k/d;
		cout<<"Case #"<<i<<':'<<endl;
		cout<<a1<<'/'<<k<<' '<<c1<<'/'<<k<<endl;
		long long s=gcd(a1+c1,k);
		cout<<(a1+c1)/s<<'/'<<k/s<<endl;
		long long h=gcd(a*d,b*c);
		cout<<a*d/h<<'/'<<b*c/h<<endl;
		i++;
	}
	return 0;
}


