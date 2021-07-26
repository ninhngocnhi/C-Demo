#include <iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		long long dem=0;
		char a[m+5][n+5];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]!='0'){
					for(int k=j+1;k<n;k++){
						if(a[i][k]!=a[i][j] && a[i][k]!='0'){
							for(int b=0;b<i;b++){
								if(a[b][j]==a[i][k]){
									dem++;
								}
							}
							for(int b=m-1;b>i;b--){
								if(a[b][j]==a[i][k]){
									dem++;
								}
							}
							for(int b=0;b<i;b++){
								if(a[b][k]==a[i][j]){
									dem++;
								}
							}
							for(int b=m-1;b>i;b--){
								if(a[b][k]==a[i][j]){
									dem++;
								}
							}
						}
					}
				}
			}
		}   
	cout<<dem;
	}
	return 0;
}

