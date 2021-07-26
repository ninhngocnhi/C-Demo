#include <bits/stdc++.h>
#define MAX 0
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		int x=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			x=max(x,a[i]);
			b[i]=a[i];
		}
		cout<<x<<" ";
		for(int k=2;k<=n;k++){
			int minn,maxx=MAX;
			for(int i=0;i<n-k+1;i++){
				minn=min(b[i],a[i+k-1]);
				b[i]=minn;
				maxx=max(maxx,minn);
			}
			cout<<maxx<<" ";
		}
		cout<<endl;
	}
	return 0;
}

