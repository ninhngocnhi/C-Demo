#include <bits/stdc++.h>
using namespace std;
FILE*f=fopen("MH.INP","r");
struct inf{
	int pos;
	char name[50];
	char type[50];
	double buy,sell,ben;
};
int main (){
	int t;
	char a[10],b[10];
	fscanf(f,"%d",&t);
	inf ds[t];
	for(int i=0;i<t;i++){
		ds[i].pos=i+1;
		fgets(a,10,f);
		fgets(ds[i].name,50,f);
		ds[i].name[strlen(ds[i].name)-1]='\0';
		fgets(b,10,f);
		fgets(ds[i].type,50,f);
		ds[i].type[strlen(ds[i].type)-1]='\0';
		fscanf(f,"%lf",&ds[i].buy);
		fscanf(f,"%lf",&ds[i].sell);
		ds[i].ben= ds[i].sell - ds[i].buy;
		fgets(a,10,f);
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t-i-1;j++){
			if(ds[j].ben<ds[j+1].ben){
				inf tmp=ds[j];
				ds[j]=ds[j+1];
				ds[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<t;i++){
		cout<<ds[i].pos<<" "<<ds[i].name<<" "<<ds[i].type<<" "<<ds[i].ben<<endl;
	}
	return 0;
}


