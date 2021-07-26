#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n,b;
	cin>>n>>b;
	char a[n],u=0;
	while(n>0){
		int t=n%b;
		n=n/b;
		if(t<10){
			a[u]=t+'0';
			u++;
		}
		else{
			a[u]='A'+t-10;
			u++;
		}
	}
	for(int i=u-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}


