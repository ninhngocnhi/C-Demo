#include <bits/stdc++.h>
using namespace std;
int a[20005][20005]={0};
int main (){
	int n;
	cin>>n;
	long long ans=0;
	int x,y,p,q;
	while(n--){
		cin>>x>>y>>p>>q;
		x+=10000;
		y+=10000;
		p+=10000;
		q+=10000;
		for(int j=q;j<y;j++){
			for(int k=x;k<p;k++){
				if(a[j][k]==0){
					ans++;
					a[j][k]=1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}


