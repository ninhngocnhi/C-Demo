#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	for(int x=1;x<=t;x++){
		int a,b;
		long long k;
		cin>>a>>b>>k;
		int ans=0;
		for(int i=a;i<=b;i++){
			int dem=0,t=i;
			for(int j=2;j<=sqrt(t);j++){
				if(t%j==0){
					dem++;
					while(t%j==0){
						t/=j;
					}
					if(dem>k){
						break;
					}
				}
			}
			if(t>1){
				dem++;
			}
			if(dem==k){
				ans++;
			}
		}
		cout<<"Case #"<<x<<": "<<ans<<endl;
	}
	return 0;
}


