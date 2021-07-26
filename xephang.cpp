#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(q--){
		int x,y;
		cin>>x>>y;
		int maxx=a[x-1],minn=a[x-1];
		for(int i=x;i<y;i++){
			maxx=max(maxx,a[i]);
			minn=min(minn,a[i]);
		}
		cout<<maxx-minn<<endl;
	}
	return 0;
}


