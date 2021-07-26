#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main (){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if (m>=n){
		printf("%d",n);
	}
	else {
		int b[m]={0},dem=1;
		for(int i=1;i<=n;i++){
			int s=a[i],d=1;
			if(s!=-10){
				for(int j=i+1;j<=n;j++){
					if(a[j]==s){
						d++;
						a[j]=-10;
					}	
				}
				b[dem]=d;
				dem++;
			}	
		}
		int sum=0;
		for(;;){
			sort(b+1,b+m+1);
			int check=0;
			for(int i=1;i<m;i++){
				if(b[m]>0 && b[i]>0){
					b[i]--;
					b[m]--;
					sum+=2;
				}
			}
			for(int i=1;i<m;i++){
				if(b[i]>0){
					check=1;
					break;
				}
				else{
					check=0;
				}
			}
			if(check==0){
				break;
			}	
		}
		printf("%d",sum);
	}
	return 0;
}

