#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	int a[8]={-1,-1,1,1,-2,-2,2,2};
	int b[8]={2,-2,2,-2,1,-2,1,-1};
	while(t--){
		int n;
		cin>>n;
		int A[n][n]={0};
		long long d=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(A[i][j]==0){
					A[i][j]=1;
					d++;
					for(int k=0;k<8;k++){
						if( 0<=i+a[k] && i+a[k]<n && 0<=j+b[k] && j+b[k]<n){
							A[i+a[k]][j+b[k]]=1;
						}
					}
				}
			}
		}
		if(d%2!=0){
			cout<<"Leviz"<<endl;
		}
		else{
			cout<<"Haley"<<endl;
		}
	}
	return 0;
}


