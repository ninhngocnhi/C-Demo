#include<iostream>
#include<math.h>
using namespace std;
typedef unsigned long long ull;
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
	int n;
	long long m;
	cin>>n>>m;
	int a[n],b[n],c[n],d[n];
	ull ans=0;
	ull x1=1,x2=1,x3=1,y1=0,y2=0,y3=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}	
	ull sum1,sum2,sum3;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			y1=(y1+b[i])%M;
			y2=(y2+c[i])%M;
			y3=(y3+d[i])%M;
		}
		else {
			x1=(x1*b[i])%M;
			y1=(y1*b[i])%M;
			x2=(x2*c[i])%M;
			y2=(y2*c[i])%M;
			x3=(x3*d[i])%M;
			y3=(y3*d[i])%M;
		}
	}
	sum1=(exp(x1,m+1)+(exp(x1,m+1)-1)*exp(x1-1,M-2)%M*y1%M)%M;
	sum2=(exp(x2,m+1)+(exp(x2,m+1)-1)*exp(x2-1,M-2)%M*y2%M)%M;
	sum3=(exp(x3,m+1)+(exp(x3,m+1)-1)*exp(x3-1,M-2)%M*y3%M)%M;
	cout<<sum1<<" "<<sum2<<" "<<sum3;
}
