#include <stdio.h>
#include <math.h>
bool isPrime(int i){
	int a=1;
	if(i<2){
		return false;
	}
	else if(i==2){
		return true;
	}
	else if(i>2){
		for (int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				return false;
			}
		}
	}
	return true;
}
bool isIncreaseOrder(int n,int i){
	int a=1,c=i;
	int b[n];
	for (int j=0;j<n;j++){
		b[j]=c%10;
		c=c/10;
	}
	for (int j=0;j<n-1;j++){
		if(b[j]>=b[j+1]){
			return false;
		}
	}
	return true;
}
bool isDeincreaseOrder(int n , int i){
	int c=i;
	int b[n];
	for (int j=0;j<n;j++){
		b[j]=c%10;
		c=c/10;
	}
	for (int j=0;j<n-1;j++){
		if(b[j]<=b[j+1]){
			return false;
		}	
	}
	return true;
}
int main (){
	int n;
	scanf("%d",&n);
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		if(isPrime(i) && isIncreaseOrder(n,i) || isPrime(i) && isDeincreaseOrder(n,i)){
			printf("%d ",i);
		}
	}
	return 0;
}

