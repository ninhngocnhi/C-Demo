//ma tran xoan oc
#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n][n];
	int i=0,j=0, r1=0, r2=0, r3=n,r4=n,flag=1;
	long long u=1;
	while(u!=n*n+1){
		a[i][j]=u;
		u++;
		if(flag==1){
			if(j!= r3-1){
				j++;
			}
			else{
				flag=2;
				i++;
				r3--;
			}
		}
		else if(flag==2){
			if(i!=r4-1){
				i++;
			}
			else{
				flag=3;
				j--;
				r4--;
			}
		}
		else if(flag==3){
			if(j!=r2){
				j--;
			}
			else{
				flag=4;
				i--;
				r2++;
			}
		}
		else{
			if(i!=r1+1){
				i--;
			}	
			else{
				flag=1;
				j++;
				i=++r1;
			}
		}
	}
	for (int i=0;i<n;i++){
	    for (int j=0;j<n;j++){
	    	cout<<a[i][j]<<" ";
		} 
		cout<<endl;
	}
	return 0;
}


