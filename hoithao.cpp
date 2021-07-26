#include <stdio.h>
#include <string.h>
#define N 100000
int main (){
	char a[N];
	gets (a);
	int len = strlen(a);
	int b=0, g=0;
	for(int i=0;i<len;i++){
		if(a[i] == 'A'){
			b++;
		}
		else if(a[i] == 'B'){
			g++;
		}
	}
	if(b==g){
		printf("YES");
	} 
	else{
		printf("NO");
	}
	return 0;
}

