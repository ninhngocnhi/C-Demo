#include <stdio.h>
#include <math.h>
int main (){	
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
//	int check=1;
//	long long s=0;
	if( c == (d+1)){
		if(c<=a && c<=b){
			int a1=a-c,b1=b-c;
			for(int i=0;i<a1;i++){
//				s=s*10+2;
				printf("2");
			}
			for(int i=0;i<c;i++){
//				s=s*100+28;
				printf("28");
			}
			for(int i=0;i<b1;i++){
//				s=s*10+8;
				printf("8");
			}
//			check=1;
		}
		else{
//			check=0;
			printf("Yeu Ha Noi");
		}
	}
	else if(c==d){
		if((c+1) <= a && c<=b){
			int a1=a-c-1,b1=b-c;
			for(int i=0;i<a1;i++){
//				s=s*10+2;
				printf("2");
			}
			for(int i=0;i<c;i++){
//				s=s*100+28;
				printf("28");
			}
			for(int i=0;i<b1;i++){
//				s=s*10+8;
				printf("8");
			}
//			s=s*10+2;
//			check=1;
			printf("2");               
		}
		else{
//			check=0;
			printf("Yeu Ha Noi");
		}
	}
	else if( (c+1) == d){
		if(d <= a && d<=b){
			int a1=a-d,b1=b-d;
//			s=82;
			printf("82");
			for(int i=0;i<a1;i++){
//				s=s*10+2;
				printf("2");
			}
			for(int i=0;i<d-2;i++){
//				s=s*100+82;
				printf("82");
			}
			for(int i=0;i<b1;i++){
//				s=s*10+8;
				printf("8");
			}
//			s=s*100+82;
//			check=1;
			printf("82");
		}
		else{
//			check=0;
			printf("Yeu Ha Noi");
		}
	}
	else{
		printf("Yeu Ha Noi");
	}
//	if(check==0){
//		printf("Yeu Ha Noi");
//	}
//	else if(check ==1 ){
//		printf("%lld",s);
//	}
	return 0;
}

