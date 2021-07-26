#include <stdio.h>
#include <math.h>
int main (){
	int y,b,p;
	scanf("%d%d%d",&y,&b,&p);
	long long s;
	int min=y;
	if(min>=b) min=b;
	if(min>=p) min=p;
	if(min==p){
		s=3*p-3;
	}
	else if(min==b){
		s=3*b;
	}
	else if(min==y && p-y==1){
		s=3*p-3;
	}
	else if(min==y && p-y>1){
		s=3*y+3;
	}
	printf("%lld",s);
	return 0;
}

