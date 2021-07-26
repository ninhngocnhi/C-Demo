#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main (){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,c,d;
		scanf("%d%d%d",&n,&c,&d);
		int min,max;
		double sum1=0,sum2=0;
		if(c<d){
			min=c,max=d;
		}
		else{
			min=d,max=c;
		}
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(int i=n-1;i>=n-min;i--){
			sum1+=(float)a[i];
		}
		for(int i=n-min-1;i>=n-min-max;i--){
			sum2+=(float)a[i];
		}
		double ans=sum1/(float)min + sum2/(float)max;
		printf("%.6llf\n",ans);
	}
	return 0;
}


