#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long s[n],b[n];
	for(int i=0;i<n;i++){
		cin>>s[i]>>b[i];
	}
	int a[n]={0};
	a[n-1]=1;
	int stop=0;
	long long ans=1000000000;
	while(stop==0){
		long long S=1,B=0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				S*=s[i];
				B+=b[i];
			}
		}
		
		ans=min(ans,abs(S-B));
		int i=n-1;
		while(i>=0 && a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==-1){
			stop=1;
		}
		else{
			a[i]=1;
		}
	}
	cout<<ans;
	return 0;
}


