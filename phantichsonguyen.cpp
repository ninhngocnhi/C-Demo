#include <bits/stdc++.h>
using namespace std;
//int chinhphuong(unsigned long long a){
//	unsigned long long b= sqrt(a);
//	if(b*b==a) return 1;
//	else return 0;
//}
int main (){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		unsigned long long a,b;
		cin>>a>>b;
		unsigned long long dem=0,k=2*b,x=sqrt(2*b),y;
		for(int j=2;j<=x;j++){
			if(k%j==0){
				y=k/j;
				if( (y-j) % 2 != 0){
					dem++;
				}
			}
		}
//		for(unsigned long long j=1;j<=x;j++){
//			unsigned long long denta= (2*j+1)*(2*j+1)-8*(j-b);
//			if( chinhphuong(denta)==1){
//				unsigned long long ans= -2*j-1+sqrt(denta);
//				if( ans % 2 ==0){
//					dem++;
//				}
//			}
//		}
		cout<<i<<" "<<dem<<endl;
	}
	return 0;
}


