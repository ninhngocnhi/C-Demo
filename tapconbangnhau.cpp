#include <bits/stdc++.h>
using namespace std;
long long sum[2000000];
void datbang0(int a[],int n,int x){
	for(int i=x;i<n;i++){
		a[i]=0;
	}
}
main (){
	int k;
	cin >> k;
	while(k--){
		int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	int dem=0;
	int u=0;
	memset(sum,0,2000000);
	int b[1000]={0};
	int i=n-1;
	while(i>0){
		if(b[i]==1){
			i--;
		}
		if(b[i]==0){
			b[i]=1;
			datbang0(b,n,i+1);
			for(int j=n-1;j>=0;j--){
				if(b[j]==1){
					sum[u]+=a[j];
				}
			}
			u++;
			i=n-1;
		}
	}
	sort(sum,sum+u);
	for(int i=0;i<u-1;i++){
		if(sum[i]==sum[i+1]){
			dem=1;
			break;
		}
	}
	if(dem==0) cout << "NO\n";
	else cout << "YES\n";
	}
	return 0;
}
