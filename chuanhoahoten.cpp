#include <stdio.h>
#include <string.h>
#include <ctype.h> 
//FILE*f = fopen("HOTEN.INP","r");
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
	
//	char a[100];
//	gets(a);

//	fscanf(f,"%d",&t);
//	fgets(a,100,f);
//	while(t--){
//		fgets(a,100,f);
//	}
	return 0;
}
