#include <bits/stdc++.h>
using namespace std;
int main (){
	long long b[3];
	cin>>b[0]>>b[1]>>b[2];
	sort(b,b+3);
	if(b[0]==b[1] && b[1]==b[2]){
		cout<<"0";
	}
	else {
		cout<<b[2]-b[0];
	}
	return 0;
}


