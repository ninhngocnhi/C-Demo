#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n]={0},ans=1;
	b[0]=1;
	for(int i=1;i<n;i++){
		int check=0,y=0;
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i]){
				y=max(y,b[j]+1);
				check=1;
			}
		}
		if(check==0){
			b[i]=1;
		}
		else{
			b[i]=y;
			ans=max(ans,y);
		}
	}
	cout<<ans;

	return 0;
}


