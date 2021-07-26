#include <stdio.h>
#include <string.h>
#define N 100000
int main (){
	char a[N];
	gets(a);
	int len = strlen(a);
	int dem=0, check=len-1,check1 =0;
	for(int i=0;i<len;i++){
		if( 'A'<=a[i] && a[i]<= 'Z'){
			a[i]+=32;
		}
	}
	for(int i=0;i<len;i++){
		if(a[i]== ' '){
			dem++;
		}
		else{
			break;
		}
	}
	for(int i=len-1;i>=0;i--){
		if(a[i]== ' '){
			check--;
			check1++;
		}
		else{
			break;
		}
	}
	char b[N],c[N],d[]="@ptit.edu.vn";
	int u=1,v=0;
	for(int i=check;i>=0;i--){
		if(a[i] != ' '){
			c[v]=a[i];
			v++;
		}
		else{
			break;
		}
	}
	b[0]= a[dem];
	for(int i=dem+1;i<len-v-check1;i++){
		if(a[i-1]==' ' && a[i] !=' '){
			b[u]=a[i];
			u++;
		}
	}
	for(int i=v-1;i>=0;i--){
		printf("%c",c[i]);
	}
	for(int i=0;i<u;i++){
		printf("%c",b[i]);
	}
	puts(d);
	return 0;
}
//dia chi email
