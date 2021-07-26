#include<stdio.h>
#include<math.h>
int squarable(int n){
	int i=sqrt(n);
	if(n==i*i) return 1;
	else return 0;
}
int countsquarable(int m){
	int count=0;
	for(int i=0;i<=m;i++){
		if(squarable(i)==1) count++;
	}
	return count;
}
	int main(){
		int n;
		scanf("%d",&n);
		if(squarable(n)==1)
		printf("%d la so chinh phuong",n);
		else
		printf("%d ko la so chinh phuong",n);
		int m;
		scanf("%d",&m);
		printf("so so chinh phuong nho hon m la %d",countsquarable(m));
		return 0;
	}
