#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
FILE*f=fopen("THISINH.INP","r");
struct inf{
	char name[50];
	char day[50];
	float a,b,c,s;
	int pos;
};
int main (){
	int t;
	fscanf(f,"%d",&t);
	inf ds[t];
	char a[10],b[10];
	for(int i=0;i<t;i++){
		ds[i].pos=i+1;
		fgets(a,10,f);
		fgets(ds[i].name,50,f);
		ds[i].name[strlen(ds[i].name)-1]='\0';
		fgets(b,10,f);
		fgets(ds[i].day,50,f);
		ds[i].day[strlen(ds[i].day)-1]='\0';
		fscanf(f,"%f%f%f",&ds[i].a,&ds[i].b,&ds[i].c);
		ds[i].s=ds[i].a+ds[i].b+ds[i].c;
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t-i-1;j++){
			if(ds[j].s<ds[j+1].s){
				inf k=ds[j];
				ds[j]=ds[j+1];
				ds[j+1]=k;
			}
		}
	}
	for(int i=0;i<t;i++){
		printf("%d %s %s %1.f\n",ds[i].pos,ds[i].name,ds[i].day,ds[i].s);
	}
	return 0;
}


