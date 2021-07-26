#include <stdio.h>
#include <string.h>
#define N 100000
int main (){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[N];
		gets(a);
		int len = strlen(a);
		for(int i=0;i<len;i++){
			if( 'a'<=a[i] && a[i]<= 'z'){
				a[i]-=32;
			}
		}
		char b[N],c[N];
		int u=0,v=0,dem=0,check=0,check1=len-1;
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
				check1--;
			}
			else{
				break;
			}
		}
		for(int i=dem;i<len;i++){
			if(a[i] != ' '){
				dem++;
				c[v]=a[i];
				v++;
			}
			else{
				for(int j=i;j<len;j++){
					if(a[j]==' '){
						dem++;
					}
					else{
						break;
					}
				}
				break;
			}
		}
		printf("%c",a[dem]);
		for(int i=dem+1;i<=check1;i++){
			if(a[i-1] !=' ' && a[i]!=' '){
				a[i]+=32;
				printf("%c",a[i]);
			}
			else if(a[i-1] ==' ' && a[i]!=' '){
				printf("%c",a[i]);
			}
			else if(a[i]==' '){
				printf(" ");
				for(int j=i+1;j<len;j++){
					if(a[j] !=' '){
						check=j;
						break;
					}
				}
				i=check-1;
			}	
		}
		printf(", ");
		for(int i=0;i<v;i++){
			printf("%c",c[i]);
		}
		printf("\n");
	}
	return 0;
}
//chuan hoa ho ten
