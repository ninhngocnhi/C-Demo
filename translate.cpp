#include <stdio.h>
int main() {
	int m,n,s,x=0;
	scanf ("%d%d",&m,&n);
	char c[16]={0,1,2,3,4,5,6,7,8,9,'A','B','C','D','E','F'};
	char a[10000];
	for (int i=0;i<10000;i++){
		if (m>0){
			s=m%n;
			a[i]=c[s];
			m=m/n;
			x++;
		}
		else if (m==0){
			break;
		}
	}
	for (int i=x-1;i>=0;i--){
		printf ("%c",a[i]);
	}
	return 0;
}

