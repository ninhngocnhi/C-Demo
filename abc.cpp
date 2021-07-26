#include <stdio.h>
int main (){
	int h;
	scanf ("%d",&h);
	for (int i=0;i<h;i++){
		if (i==h-1){
			for (int j=0;j<i+1;j++){
				printf ("*");
			}
		}
		else{
			for (int j=0;j<i+1;j++){
				if (j==0||j==i){ 
					printf ("*");          
				}
				else {
					printf (" ");
				}
			}
		}
		printf ("\n");
	}
	return 0;
}


