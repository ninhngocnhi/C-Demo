#include <stdio.h>
#include <string.h>
int main() {
	char a[3],b[3];
	gets(a);
	if (strcmp(a,b)==0) printf("0");
	else printf("-1");
	return 0;
}

