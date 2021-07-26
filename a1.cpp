#include <bits/stdc++.h>
using namespace std;
int main (){
	long long r;
	cin>>r;
	if(r<5){
		cout<<"NO";
	}
	else{
		if(r%2==0){
			cout<<"NO";
		}
		else{
			cout<<"1"<<" "<<(r-3)/2;
		}
	}
	return 0;
}


