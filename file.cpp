#include <bits/stdc++.h>
using namespace std;
FILE *f=fopen("B18DCCN456","w+");
struct id{
	int stt;
	char ten[100];
	float  a,b;
};
int main (){
	int n;
	cin>>n;
	id ds[100];
	int sl;
	if(n==1){
		int so;
		cin>>so;
		sl=so;
		fflush(stdin);
		for(int i=0;i<so;i++){
			ds[i].stt=i+1;
			gets(ds[i].ten);
			cin>>ds[i].a>>ds[i].b;
			fflush(stdin);
		}
		cout<<so;
	}
	else if(n==2){
		int ma;
		cin>>ma;
		fflush(stdin);
		char ten1[100];
		float  a1,b1;
		gets(ten1);
		strcpy(ds[ma-1].ten,ten1);
		cin>>a1>>b1;
		ds[ma-1].a=a1,ds[ma-1].b=b1;
		cout<<ma;
	}
	else{
		for(int i=0;i<sl;i++){
			if(ds[i].a<ds[i].b){
				printf("%d %s %1.f %1.f\n",ds[i].stt,ds[i].ten),ds[i].a,ds[i].b;
			}
		}
		
	}
	return 0;
}


