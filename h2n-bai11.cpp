#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[n],b[m];
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	for (int j=0;j<m;j++){
		scanf ("%d",&b[j]);
	}
	sort(a,a+n);
	sort(b,b+m);
	for (int i=0;i<n;i++){
		if (a[i]<b[0]){
			printf ("%d ",a[i]);
		}
	}
	for (int j=0;j<m-1;j++){
		printf ("%d ",b[j]);
		for (int i=0;i<n;i++){
			if (b[j]<=a[i] && a[i]<b[j+1]){
				printf ("%d ",a[i]);
			}
		}
		
	}
	printf ("%d ",b[m-1]);
	for (int i=0;i<n;i++){
		if (b[m-1]<=a[i]){
			printf ("%d ", a[i]);
		}
	}
	return 0;
}

