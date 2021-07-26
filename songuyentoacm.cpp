#include<iostream>
#include <math.h>
//#define N 1000000007
using namespace std;
const long long N=1000000007;
long long power(long long a, long long b, long long m) {
    if(a==0) return 0;
	if (b == 0) return 1;
    long long tmp = power(a, b/2, m);
    tmp = tmp*tmp % m;
    if (b % 2) tmp = tmp*a % m;
    return tmp;
}
int main (){
	int n;
	long long x;
	cin>>n>>x;
	long long a,maxx=0,sum=0;
	for(int i=0;i<n;i++){
		cin>>a;
		maxx=max(maxx,a);
		sum=sum+a%N;
	}
	sum-=maxx;
	long long ans= power(x,sum,N);
	cout<<ans;
	return 0;
}

