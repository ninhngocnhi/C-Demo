#include <stdio.h>
#include <string.h>
#include <ctype.h> 
void solve(char a[]){
	char ans[100]="";
	char *p=strtok(a," ");
	while(p!= NULL){
		p[0]=toupper(p[0]);
		for(int i=1;i<strlen(p);i++){
			p[i]=tolower(p[i]);
		}
		strcat(ans,p);
		strcat(ans," ");
		p=strtok(NULL," ");
	}
	ans[strlen(ans)-1]='\0';
	printf("%s",ans);
}
int main (){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[100];
		fflush(stdin);
		gets(a);
		solve(a);
		printf("\n");
	}
	return 0;
}
