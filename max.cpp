#include <stdio.h>
int main() {
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i= 1;i<=n;i++){
		scanf ("%d", &a[i]);
	}
	int max= a[1];
	int vt=1;
	for (int i= 2;i<=n;i++){
		if (max <= a[i]){
			max = a[i];
			vt=i;
		}
	}
	printf ("%d %d", max , vt);
	return 0;
}

