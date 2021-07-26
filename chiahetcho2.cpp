#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long n;
		cin>>n;
		if(n%2 !=0){
			cout<<"0"<<endl;
		}
		else{
			long long a=0;
			while(n%2==0){
				a++;
				n/=2;
			}
			long long b=1;
			for(int i=3;i<=sqrt(n);i++){
				if(n%i==0){
					int dem=0;
					while(n%i==0){
						dem++;
						n/=i;
					}
					b*=(dem+1);
				}
			}
			if(n>1){
				b*=2;
			}
			cout<<a*b<<endl;
		}
	}
	return 0;
}


