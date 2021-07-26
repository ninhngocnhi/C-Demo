#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 10000
int main(){
  	long long i=0,j=1;
  	int n,nguyento;
    scanf("%d",&n);
  }
  	while(n<1||n>max);
 	while(i!=n)
  {  
        int d=2;
        j++;
        while(j%d!=0&&d<=sqrt(j))
         d++;
        if(d>sqrt(j))
           i++;  
  }
  printf("So nguyen to thu %d la %ld\n",n,j);
  getch();
}


