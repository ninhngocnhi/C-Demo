#include <bits/stdc++.h>
using namespace std;
int main (){
	long long a[12];
	a[0]=1;
	for(int i=1;i<12;i++){
		a[i]=a[i-1]*i;
	}
	int t;
	cin>>t;
	while(t--){
		long long n,sum=0;
		int index=1;
		cin>>n;
		while(n>0){
			int t=n%10;
			sum+=t*a[index];
			index++;
			n/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}


