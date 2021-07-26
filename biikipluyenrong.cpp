#include <stdio.h>
int main() {
int s,n,x,y;
scanf ("%d %d\n",&s ,&n);
for (int i=1; i<=n; i++){
	scanf ("%d %d", &x, &y);
	if (s> x){
		s= s +y;
	}
}
if (s > x){
	printf ("YES");
}
else printf ("NO");
	return 0;
}

