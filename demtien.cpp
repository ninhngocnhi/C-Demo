#include <stdio.h>
#include <math.h>
int main (){
	int n,a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1,h,h1,k,dem=0;
	scanf ("%d",&n);
	a=n/500;
	dem=dem+a;
	a1=n - 500*a;
	b= a1 / 200;
	dem=dem+b;
	b1=a1 - 200*b;
	c= b1 / 100;
	dem=dem+c;
	c1=b1 - 100*c;
	d= c1 / 50;
	dem=dem+d;
	d1=c1 - 50*d;
	e= d1 / 20;
	dem=dem+e;
	e1=d1 - 20*e;
	f= e1 / 10;
	dem=dem+f;
	f1=e1 - 10*f;
	g= f1 / 5;
	dem=dem+g;
	g1=f1 - 5*g;
	h= g1 / 2;
	dem=dem+h;
	h1=g1-2*h;
	dem=dem+h1;
	printf ("%d", dem);
	return 0;
}
