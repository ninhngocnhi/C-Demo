#include <stdio.h>
int main() {
	int n, vt;
	scanf ("%d",&n);
	int a[n];
	for (int i= 1;i<=n;i++){
		scanf ("%d", &a[i]);
	}
	int max= a[1];
	int vt1=1;
	for (int i= 2;i<=n;i++){
		if (max <= a[i]){
			max = a[i];
			vt1=i;
		}
	}
	int max1= a[1];
	int vt2=1;
	for (int e=2; e<=n;e++){
		if (max1 <= a[e] && e!= vt1){
			max1= a[e];
			vt2=e;
		}
	}
	printf ("%d %d\n", max , vt1);
	printf ("%d %d\n", max1 , vt2);
	return 0;
}


