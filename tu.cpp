#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d",&n);
	//hinh a
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<i+1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	//hinh b
	printf("\n");
	for(int i=0;i<n;i++){
		int x=0;
		for(int j=0;j<n;j++){
			if(j<n-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	//hinh c
	printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	//hinh d
	printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<n-i-1){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	//Hinh a
	for (int i=0;i<n;i++)
	 {for (int j=0;j<n;j++)
	  if (j<i+1)
	  {printf("*");}
	  else 
	  {printf(" ");}
       printf("\n");}
    printf("\n");
	//Hinh b
	for (int i=0;i<n;i++)
	 {for (int j=0;j<n;j++)
	 if (j<n-i)
	 {printf("*");}
	 else
	 {printf(" ");}
	  printf("\n");}
	printf("\n");
	//Hinh c
	for (int i=0;i<n;i++)
	 {for (int j=0;j<n;j++)
	  if (j>i-1)
	  {printf("*");}
	  else
	  {printf(" ");}
	  printf("\n");
	 }
	printf("\n");
	//Hinh d
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	if (j>n-i-2)
	{printf("*");}
	else
	{printf(" ");}
	printf("\n");
	}

	return 0;
}

