#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m,k;
	cin>>n>>m>>k;
	int a[m+1],b[n+3]={0};
	for(int i=1;i<=m;i++){
		cin>>a[i];
		int x,y;
		if(a[i]-k<0){
			x=0;
		}
		else{
			x=a[i]-k;
		}
		if(a[i]+k>n){
			y=n;
		}
		else{
			y=a[i]+k;
		}
		for(int j=x;j<=y;j++){
			b[j]=1;
		}
	}
	int ans=0;
	b[n+2]=1,b[0]=1;
	for(int j=0;j<=n+2;j++){
		cout<<b[j]<<" ";
	}
	for(int i=0;i<=n+2;i++){
		int check=i;
		if(b[i]==0){
			int dem=1;
			for(int j=i+1;j<=n+2;j++){
				if(b[j]==0){
					dem++;
				}
				else{
					check=j;
					ans+=dem/(2*k);
					if(dem%(2*k) !=0) ans++;
					break;
				}
			}
		}
		i=check;
	}
	cout<<ans;
	return 0;
}


