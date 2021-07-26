#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n,a=3,d=4;
	cin>>n;
	while(a<n){
		a=a*2+d;
		d++;
	}
	d--;
	while(n>3){
		if(n==a){
			cout<<'o';
			return 0;
		}
		else{
			int x=(a-d)/2;
			if((0<n && n<=x) || (x+d<n && n<=a)){
				if(x+d<n && n<=a){
					n-=(x+d);
				}
				a=(a-d)/2;
				d--;
			}
			else{
				if(n==x+1){
					cout<<'m';
				}
				else{
					cout<<'o';
				}
				return 0;
			}
		}
	}
	if(n==1){
		cout<<'m';
	}
	else{
		cout<<'o';
	}
	return 0;
}


