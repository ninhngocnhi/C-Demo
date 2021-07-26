#include <stdio.h>
#include <math.h>
int main (){
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0], min=a[0], vtmax=0, vtmin=0, tong=0;
	for(int i=0;i<n;i++){
		tong+=a[i];
		if(max<a[i]){
			max=a[i];
			vtmax=i;
		}
		if(min>a[i]){
			min=a[i];
			vtmin=i;
		}
	}
	printf("%d %d\n %d %d\n %d",max,vtmax,min,vtmin,tong);
	return 0;
}

