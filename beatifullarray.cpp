#include <bits/stdc++.h>
using namespace std;
int a[131072];
int ans=1;
int sol(int fi,int la){
//	if(a==b) return 1;
//	else{
		int check=0;
		for(int i=fi +1;i<la;i++){
			if(a[i] < a[i-1]){
				check=1;
				break;
			}
		}
		if(check==0){
			ans=max(ans,la-fi);
		}
		else{
			sol(fi,(fi + la)/2);
			sol((fi + la)/2+1,la);
		}
//	}
}
int main (){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sol(0,n);
	cout<<ans;
	return 0;
}


