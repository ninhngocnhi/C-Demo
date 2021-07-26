#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
long long nhan(long long a, long long b){
	if( b==1 ) return a % M;
	long long temp = nhan(a, b/2);
	temp = temp + temp;
	if( b%2==1 ) temp = temp + a;
	return temp % M;
}
 
long long exp(long long a, long long n ){
	if(a==0) return 0;
	if( n==0 ) return 1;
	long long temp = exp(a, n/2);
	temp = nhan(temp, temp);
	if( n%2==1 ) temp = nhan(temp, a);
	return temp % M;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,l,r;
		cin>>x>>y>>z>>l>>r;
		int a,b,c,check=0;
		for(int i=sqrt(x);i>sqrt(x/3);i--){
			a=i;
			for(int j=sqrt(x-a*a);j>sqrt((x-a*a)/2);j--){
				b=j;
				c=sqrt(x-a*a-b*b);
				if(a*a+b*b+c*c==x && a*a*a+b*b*b+c*c*c==y && a*a*a*a+b*b*b*b+c*c*c*c==z){
					check=1;
				}
				if(check==1){
					break;
				}
			}
			if(check==1){
				break;
			}
		}
		long long so=r-l+1;
		long long sum1=((exp(a,so)-1)*exp(a-1,M-2)%M*(exp(a,l)%M))%M;
		long long sum2=((exp(b,so)-1)*exp(b-1,M-2)%M*(exp(b,l)%M))%M;
		long long sum3;
		if(c==1){
			sum3=so;
		}
		else{
			sum3=((exp(c,so)-1)*exp(c-1,M-2)%M*(exp(c,l)%M))%M;
		}
		long long ans=sum1+sum2+sum3;
		ans%=M;
		cout<<ans<<endl;
	}
	return 0;
}


