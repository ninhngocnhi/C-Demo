#include <bits/stdc++.h>
using namespace std;
int main (){
	char a[100];
	gets(a);
	int len=strlen(a);
	char ten[100],u=0;
	for(int i=len-1;i>=0;i--){
		if(a[i]!=' '){
			if('A'<= a[i] && a[i]<='Z'){
				a[i]+=32;
			}
			ten[u]=a[i];
			u++;
		}
		else{
			break;
		}
	}
	char b[]="@ptit.edu.vn";
	char ans[100]="";
	char *p=strtok(a," ");
	while(p!= NULL){
		if('A'<=p[0]<='Z'){
			p[0]+=32;
		}
		strcat(ans,p[0]);
		p=strtok(NULL," ");
	}
	for(int i=u-1;i>0;i--){
		strcat(ans,ten[i]);
	}
	strcat(ans,b);
	puts(ans);
	return 0;
}


