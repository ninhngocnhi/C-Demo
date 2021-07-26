#include <stdio.h>
int main() {
	int T,s,a;
	scanf ("%d\n",&T);
	for (int i=0;i<T; i++){
	 	scanf ("%d",&a);
	 	s=1;
	 	for (int e=1;e<=a;e++){
	 		s= s*e;
		}
		printf ("%d\n", s);
	}
	return 0;
}

