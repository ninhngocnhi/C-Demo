#include <stdio.h>
#include <math.h>
int main (){
	int T;
	scanf("%d",&T);
	int S=3584;
	int s=0,t=T;
	for(int i=0;i<4;i++){
		s+=t%10;
		t=t/10;
	}
	if((T%4==0 && T%100 !=0) || T%400 ==0){
		S+=366*s+13;
	}
	else{
		S+=365*s;
	}
	printf("%d",S);
	return 0;
}

