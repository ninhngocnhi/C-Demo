#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c,x,y,z,s;
	scanf ("%f %f %f",&a,&b,&c);
	x= sqrt(a*c/b);
	printf ("%f", x);
	y= sqrt(b*c/a);
	printf ("%f", y);
	z =sqrt(a*b/c);
	printf ("%f", z);
    s= 4*(x+y+z);
    printf ("%f", s);
	return 0;
	}

