#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int uoc(long long a, int b){
	if (b == 0) return a;
    return uoc(b, a % b);	
}
int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	long long sumdon=0, sumdoi=0;
	for(int i=0;i<n;i++){
		sumdoi+=i * a[i]-sumdon;
		sumdon=sumdon+a[i];		 
//		for(int j=i+1;j<=n;j++){
//			sumdoi=sumdoi + abs(a[i]-a[j]);
//		}
	}
	long long sum=sumdon + sumdoi * 2;
	int u=uoc(sum,n);
	printf("%lld %d",sum/u,n/u);
	return 0;
}

