#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>m>>n;
		char a[5*m+1][5*n+1];
		int ans[5]={0};
		for(int i=0;i<5*m+1;i++){
			for(int j=0;j<5*n+1;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<5*m+1;i+=5){
			for(int j=1;j<5*n+1;j+=5){
				int dem=0;
				for(int k=i;k<i+4;k++){
					if(a[k][j]=='*'){
						dem++;
					}
					else{
						break;
					}
				}
				ans[dem]++;
			}
		}
		for(int i=0;i<5;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


