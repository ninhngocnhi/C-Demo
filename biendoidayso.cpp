#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		cin>>a[0];
		int x=a[0],d=0;
		for(int i=1;i<n;i++){
			cin>>a[i];
			x=__gcd(x,a[i]);
		}
		if(x>1){
			cout<<"YES "<<d<<endl;
		}
		else{
			a[n]=2;
			int check=1,de=0;
			for(int i=0;i<=n;i++){
				if(a[i]%2 !=0){
					de++;
				}
				else{
					d+=de/2;
					if(de%2 !=0){
						d+=2;
					}
					de=0;
				}
			}
			cout<<"YES "<<d<<endl;
		}
	}
	return 0;
}


