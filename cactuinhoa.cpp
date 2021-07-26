#include <bits/stdc++.h>
using namespace std;
int main (){
	char a[1000];
	gets(a);
	char *p=strtok(a," ");
	char ans[1000]="";
	while(p!=NULL){
		int check=0;
		for(int i=0;i<strlen(p);i++){
			if('a'<= p[i] && p[i]<='z'){
				check=1;
				break;
			}
		}
		if(check==0){
			strcat(ans,p);
			strcat(ans," ");
		}
		p=strtok(NULL," ");
	}
	puts(ans);
	return 0;
}


