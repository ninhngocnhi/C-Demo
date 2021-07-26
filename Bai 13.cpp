#include <stdio.h>

int main() {
	double a;
	printf (" nhap so: ");
	scanf ("%lf", &a);
	if (a>0) {
		printf ("duong");
	}
	else if (a<0) {
			printf ("am");
		}
		else {
			printf("khong la ca hai");
		}
	


	return 0;
}

