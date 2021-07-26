#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
struct word{
	char a[100];
	int id;
};
int main (){
	char a[1000];
	gets(a);
	word ds1[100];
	int i1=0;
	char *p1=strtok(a," ");
	while(p1!=NULL){
		int len=strlen(p1);
		for(int j=0;j<len;j++){
			if('A'<= p1[j] && p1[j]<= 'Z'){
				p1[j]+=32;
			}
		}
		int check=0;
		for(int j=0;j<i1;j++){
			int x = strcmp(p1,ds1[j].a);
			if(x==0){
				ds1[j].id++;
				check=1;
				break;
			}
		}
		if(check==0){
			strcpy(ds1[i1].a,p1);
			ds1[i1].id=1;
			i1++;
		}
		p1=strtok(NULL," ");
	}
	for(int j=0;j<i1;j++){
		int len=strlen(ds1[j].a);
		for(int k=0;k<len;k++){
			cout<<ds1[j].a[k];
		}
		cout<<" "<<ds1[j].id<<endl;
	}
	return 0;
}


