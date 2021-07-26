#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
FILE*f=fopen("DATA.INP. ","r");
int main (){
	char a[1000];
	char ans[1000]="";
	fgets(a,1000,f);
	int maxx=0;
	char *p= strtok(a," ");
	while(p!= NULL){
		int len= strlen(p),check=1;
		for(int i=0;i<len/2;i++){
			if(p[i] != p[len-1-i]){
				check=0;
				break;
			}
		}
		if(check==1 && maxx<len){
			strcpy(ans ,p);
			maxx=len;
		}
		if(check==1 && maxx==len){
			char x[10];
			itoa(maxx,x,10);
			strcat(ans ,p);
			strcat(ans," ");
			strcat(ans,x);
			strcat(ans,"\n");
		}
		p=strtok(NULL," ");
	}
	printf("%s %d",ans,maxx);
	return 0;
}


