#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n;
	cin>>n;
	long long a=sqrt(n)+1;
	long long ans=1;
   	for(long long i=2;i<=a;i++){
   		int dem=0;
		while(n%i==0){
			n/=i;
			dem++;
		}
		if(dem>0){
			ans=ans*(dem*2 +1);
		}
	}
	if(n>1) ans*=3;
	cout<<ans;
	return 0;
}


