#include <stdio.h>
#include <string.h>
#define N 100005
int main (){
	char a[N];
	gets(a);
	int len=strlen(a);
	char b[N],c[N];
	int d1=0,d2=0;
	int check1=0,check2 =0;
	for(int i= len-1;i>=0;i--){
		if(a[i] != ' '){
			c[d2]=a[i];
			d2++;
			check1++;
		}
		else{
			for(int j=i;j>=0;j--){
				if(a[i]==' '){
					check1++;
				}
				else{
					break;
				}
			}
			break;
		}
	}
	for(int i=0;i< len-1-check1;i++){
		if(a[i]!=' '){
			b[d1]=a[i];
			d1++;
		}
		else{
			b[d1]=a[i];
			d1++;
			for(int j=i+1;j<len-1-check1;j++){
				if(a[j]==' '){
					check2=j;
				}
				else{
					break;
				}
			}
			i=check2;
		}
	}
	for(int i=d2-1;i>0;i--){
		printf("%c",c[i]);
	}
	printf(", ");
	for(int i=0;i<d1;i++){
		printf("%c",b[i]);
	}
	return 0;
}



