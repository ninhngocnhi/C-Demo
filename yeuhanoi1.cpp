#include <stdio.h>
#include <math.h>
int main (){	
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if( c == (d+1)){
		if(c<=a && c<=b){
			int a1=a-c,b1=b-c;
			for(int i=0;i<a1;i++){
				printf("2");
			}
			for(int i=0;i<c;i++){
				printf("28");
			}
			for(int i=0;i<b1;i++){
				printf("8");
			}
		}
		else{
			printf("Yeu Ha Noi!");
		}
	}
	else if(c==d){
		if((c+1) <= a && c<=b){
			int a1=a-c-1,b1=b-c;
			for(int i=0;i<a1;i++){
				printf("2");
			}
			for(int i=0;i<c;i++){
				printf("28");
			}
			for(int i=0;i<b1;i++){
				printf("8");
			}
			printf("2");               
		}
		else if( c == a && c+1 <=b){
			int b1=b-c;
			for(int i=0;i<c;i++){
				printf("82");
			}
			for(int i=0;i<b1;i++){
				printf("8");
			}
		}
		else{
			printf("Yeu Ha Noi");
		}
	}
	else if( (c+1) == d){
		if(d <= a && d<=b){
			int a1=a-d,b1=b-d;
			printf("82");
			for(int i=0;i<a1;i++){
				printf("2");
			}
			for(int i=0;i<d-2;i++){
				printf("82");
			}
			for(int i=0;i<b1;i++){
				printf("8");
			}
			printf("82");
		}
		else{
			printf("Yeu Ha Noi");
		}
	}
	else{
		printf("Yeu Ha Noi");
	}
	return 0;
}

