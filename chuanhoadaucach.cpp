#include <stdio.h>
#include <string.h>
#define N 100000
int main (){
	
		char a[N];
		gets(a);
		int len = strlen(a);
		int dem=0,check=0,check1=len;
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
		for(int i=dem;i<=check1-1;i++){
			if(a[i]!=' '){
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
	return 0;
}
//chuan hoa dau cach
