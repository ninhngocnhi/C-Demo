#include <bits/stdc++.h>
using namespace std;
FILE*f=fopen("DATA.INP.txt","r");
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
		p=strtok(NULL," ");
	}
	printf("%s %d",ans,maxx);
	return 0;
}


