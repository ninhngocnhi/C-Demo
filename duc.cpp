#include <stdio.h>
#include<math.h>
int main(){
   int n;
   scanf("%d",&n);
   int a=sqrt(n)+1;
   for(int i=2 ; i<=a ; i++){
        while (n % i == 0) 
		{
            n /= i;
            printf("%d",i);
            if (n>1) printf("x");
        } 
   }
   if (n>1) printf("%d",n);
   return 0;
}
