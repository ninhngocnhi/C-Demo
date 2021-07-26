#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	long long ans= a[0][0]+a[1][1]-a[1][0]-a[0][1];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=2;k<=n-max(i,j);k++){
				long long s=0;
//				for(int x=i;x<k+i;x++){
//					for(int y=j;j<k+j;j++){
//						
//					}
//				}
				for(int x=0;x<k;x++){
					s+=a[i+x][j+x]-a[i+x][j+k-1-x];
				}
				ans=max(ans,s);
			}
		}
	}
	cout<<ans;
	return 0;
}


