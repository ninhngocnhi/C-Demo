#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	if(n==1){
		cout<<1<<" "<<0;
	}
	else{
		int a[10000]={0},u=0,ans=1,dem=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				ans*=i;
				int d=0;
				while(n%i==0){
					n/=i;
					d++;	
				}
				a[u]=d;
				u++;
			}
		}
		if(n>1){
			ans*=n;
			a[u]=1;
			u++;
		}
		sort(a,a+u);
		
		int k=log(a[u-1])/log(2);
		if(pow(2,k)!=a[u-1]){
			k+=2;
		}
		else if(pow(2,k)==a[u-1] && a[u-1]!=a[0]){
			k++;
		}
		dem+=k;
		cout<<ans<<" "<<dem;
		}
	return 0;
}


