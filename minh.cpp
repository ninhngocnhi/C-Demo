#include <stdio.h>
using namespace std;
int main (){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a%b==0 && a%c==0){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}


