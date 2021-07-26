#include <bits/stdc++.h>
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
	double maxx=0;
	inf ds[t];
	char a[10];
	fgets(a,10,f);
	for(int i=0;i<t;i++){
		ds[i].pos=i+1;
		fgets(ds[i].name,50,f);
		ds[i].name[strlen(ds[i].name)-1]='\0';
		fgets(ds[i].day,50,f);
		ds[i].day[strlen(ds[i].day)-1]='\0';
		fscanf(f,"%f%f%f",&ds[i].a,&ds[i].b,&ds[i].c);
		ds[i].s=ds[i].a+ds[i].b+ds[i].c;
		if(maxx<ds[i].s){
			maxx=ds[i].s;
		}
	}
	for(int i=0;i<t;i++){
		if(ds[i].s==maxx){
			cout<<ds[i].pos<<" "<<ds[i].name<<" "<<ds[i].day<<" "<<ds[i].s<<endl;
		}
	}
	return 0;
}


