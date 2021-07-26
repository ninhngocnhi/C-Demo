#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n,x,y,z;
	cin>>n>>x>>y>>z;
	if(y%z ==0){
		cout<<"1";
	}
	else if(z%y==0){
		if(n<z/y){
			cout<<n;
		}
		else{
			cout<<z/y;
		}
	}
	else{
		if(n<z){
			cout<<n;
		}
		else{
			cout<<z;
		}
	}
	return 0;
}


