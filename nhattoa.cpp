#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m,j;
	cin>>n>>m>>j;
	int fi=1,la=fi+m-1,a;
	long long ans=0;
	for(int i=0;i<j;i++){
		cin>>a;
		if(fi>a && a>0){
			ans+=fi-a;
			fi=a;
			la=m+a-1;
		}
		else if(a>la && a<=n){
			ans+= a-la;
			la=a;
			fi=a+1-m;
		}
	}
	cout<<ans;
	return 0;
}


