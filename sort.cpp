
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main (){
	long long n;
	scanf("%lld",&n);
	int a[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	long long s[n], ans=0;
	s[0] = 0;
	for (int i = 1; i <= n; i++) {
        s[i] = s[i-1] +a[i];
        ans += ((i-1) * a[i] - s[i-1]) * 2;
    }
	long long sum=ans + s[n];
	long long u=__gcd(sum,n);
	printf("%d %d",sum/u,n/u);
	return 0;
}

