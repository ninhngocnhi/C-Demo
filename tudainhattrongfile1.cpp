#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct tu{
	char a[100];
};
int main (){
	char a[1000];
	gets(a);
	tu ds[100];
	char ans[1000]="";
	int maxx=0;
	char *p= strtok(a," ");
	while(p!= NULL){
		int len= strlen(p);
		if(maxx<len){
			ds[0].a=
			maxx=len;
			char x[10];
			itoa(maxx,x,10);
			strcpy(ans ,p);
			strcat(ans," ");
			strcat(ans,x);
			strcat(ans,"\n");
		}
		if(maxx==len){
			char x[10];
			itoa(maxx,x,10);
			strcat(ans ,p);
			strcat(ans," ");
			strcat(ans,x);
			strcat(ans,"\n");
		}
		p=strtok(NULL," ");
	}
	printf("%s",ans);
	return 0;
}
