#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct inf{
	int pos;
	char name[1000];
	char type[1000];
	double buy;
	double sell;
	double ben;
};
int main (){
	int t;
	scanf("%d",&t);
	inf ds[t];
	for(int i=0;i<t;i++){
		ds[i].pos= i+1;
		fflush(stdin);
		gets(ds[i].name);
		fflush(stdin);
		gets(ds[i].type);
		scanf("%lf",&ds[i].buy);
		scanf("%lf",&ds[i].sell);
		ds[i].ben = ds[i].sell - ds[i].buy;
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
		printf("%d %s %s %lf\n",ds[i].pos,ds[i].name,ds[i].type,ds[i].ben);
	}
	return 0;
}


