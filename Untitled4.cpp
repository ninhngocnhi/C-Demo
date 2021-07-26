#include <stdio.h>
#include <math.h>
int n1(int i){
	int a=1;
	if(i<2){
		a=0;
	}
	else if(i==2){
		a=1;
	}
	else if(i>2){
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				a=0;
			}
		}
	}
	if(a==0) return 0;
	else if(a==1) return 1;
}
int n2(int n,int i){
	int a=1,c=i;
	int b[n];
	for (int j=0;j<n;j++){
		b[j]=c%10;
		c=c/10;
	}
	for (int j=0;j<n-1;j++){
		if(b[j]<b[j+1]){
			a=1;
		}
		else {
			a=0;
			break;
		}
	}
	if(a==0) return 0;
	else if(a==1) return 1;
}
int n3(int n,int i){
	int a=1,c=i;
	int b[n];
	for (int j=0;j<n;j++){
		b[j]=c%10;
		c=c/10;
	}
	for (int j=0;j<n-1;j++){
		if(b[j]>b[j+1]){
			a=1;
		}
		else {
			a=0;
			break;
		}
	}
	if(a==0) return 0;
	else if(a==1) return 1;
}
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=pow (10,n-1);i<pow(10,n);i++){
		if (n1(i)==1 && n2(n,i)==1 || n1(i)==1 && n3(n,i)==1){
			printf("%d ",i);
		}
	}
	return 0;
}

