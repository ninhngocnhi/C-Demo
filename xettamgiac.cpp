#include <stdio.h>
int main() {	
	double a,b,c;
	printf (" nhap tao 3 so :");
	scanf ("%lf %lf %lf", &a, &b, &c);
	if ( (a+b>c) && (a+c>b) && (b+c>a)){
		printf ("la tam giac");
	}
	else 
	printf ("khong la tam giac");
	
	return 0;
}
