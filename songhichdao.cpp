#include <bits/stdc++.h>
using namespace std;
int dao(int n){
	int s=0;
	while(n>0){
		s=s*10+n%10;
		n/=10;
	}
	return s;
}
int main (){
	int a,b;
	cin>>a>>b;
	int x=dao(a),y=dao(b);
	if(x>y){
		cout<<x;
	}
	else{
		cout<<y;
	}
	return 0;
}


