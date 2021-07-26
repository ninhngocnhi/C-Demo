#include <stdio.h>
#include <string.h>
#define N 100000
int main (){
	char a[N];
	gets (a);
	int len = strlen(a);
	int m=1;
	for(int i=0;i< len;i++){
		if(m>0 && a[i]=='0'){
			i++;
			m--;
		}
		printf("%c",a[i]);
	}
	return 0;
}

