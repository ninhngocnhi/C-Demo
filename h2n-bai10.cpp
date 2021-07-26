#include <stdio.h>
#include <algorithm>
using namespace std ;
int main() {
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int j=0;j<n-1;j++){
		for (int i=0;i<n-1;i++){
			int k;
			if (a[i]>a[i+1]){
				k=a[i];
				a[i]=a[i+1];
				a[i+1]=k;
			}
			printf ("%d ",a[i]);
		}
		printf ("%d",a[n-1]);
		printf ("\n");
	}
	return 0;
}

