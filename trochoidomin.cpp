#include <bits/stdc++.h>
using namespace std;
int main (){
	for(;;){
		int n,m;
		cin>>n>>m;
		if(n==0 && m==0){
			break;
		}
		else{
			char a[n+2][m+2];
			for(int i=0;i<m+2;i++){
				a[0][i]='.';
			}
			for(int i=0;i<m+2;i++){
				a[n+1][i]='.';
			}
			for(int i=0;i<m+2;i++){
				a[i][0]='.';
			}
			for(int i=0;i<m+2;i++){
				a[i][m+1]='.';
			}
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					cin>>a[i][j];
				}
			}
			
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					if(a[i][j]=='.'){
						char dem='0';
						for(int x=i-1;x<=i+1;x++){
							for(int y=j-1;y<=j+1;y++){
								if(a[x][y]=='*'){
									dem++;
								}
							}
						}
						a[i][j]=dem;
					}
				}
			}
			for(int i=1;i<n+1;i++){
				for(int j=1;j<m+1;j++){
					cout<<a[i][j];
				}
				cout<<endl;
			}
		}
		cout<<endl;
	}
	
	return 0;
}


