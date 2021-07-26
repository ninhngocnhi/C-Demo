#include <stdio.h>
void k1(int x)
{
   int n,i,j,a;
   n=2*x-1;
   a=x-1;
   for(i = 1; i <= n; i++) 
   {
   		if (i%2 != 0)
		{
	      	for(j = 1; j <= a; j++)
	        	printf(" ");
			
			if(i==1 || i==n)
				for(j = 1; j <= i; j++)
		        	printf("*");
		    else
		    {
				for(j = 1; j <= i; j++)
					if(j==1 ||j==i)
			        	printf("*");
			        else
			        	printf(" ");
			}
			printf("\n");
      		a--;
      	}
      	else
      	{
      		printf("\n");
      	}
   }
}
void k2(int x)
{
	int n,i,j,a;
   	n=x;
   	for(i = 1; i <= n; i++) 
	   {
		   	if(i==1 || i==n)
		   	{
		      for(j = 1; j <= i; j++)
		         printf("*");
		
			}	      
			else
				for(j = 1; j <= i; j++)
					 if (j==1 || j==i)
			         	printf("*");
			         else
			        	printf(" ");
			
		      printf("\n\n");
	   }
}
int main() 
{
	int h,k;
	scanf("%d%d",&h,&k);
	if(k==1)
		k1(h);
	else
		k2(h);
   	return 0;
}
