#include <stdio.h>
#include <math.h>
bool isPrime( int i){
	if(i<2){
		return false;
	}
	else if (i==2){
		return true;
	}
	else if (i>2){
		for ( int j=2 ; j<=sqrt(i);j++){
			if(i%j==0){
				return false;
			}
		}
		return true;
	}
}
bool isIncrease(int n , int i){
	int a[n] , c=i;
	for (int j=0 ; j<n ; j++){
		a[j]=c%10;
		c=c/10;
	}
	for (int j=0 ; j<n-1 ; j++){
		if (a[j]>=a[j+1]){
			return false;
		}
	}
	return true;
}
bool isDecrease(int n , int i){
	int a[n] , c=i;
	for (int j=0 ; j<n ; j++){
		a[j]=c%10;
		c=c/10;
	}
	for (int j=0 ; j<n-1 ; j++){
		if (a[j]<=a[j+1]){
			return false;
		}
	}
	return true;
}
int main (){
	int n;
	scanf("%d" , &n);
	for(int  i=pow(10,n-1) ; i < pow(10,n) ; i++){
		if( isPrime(i) && isIncrease(n,i) || isPrime(i) && isDecrease(n,i)){
			printf ("%d ",i);
		}
	}
	
	return 0;
}

