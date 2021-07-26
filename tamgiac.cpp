#include <bits/stdc++.h>
using namespace std;
int main (){
	long long a[2];
	cin>>a[0]>>a[1];
	sort(a,a+2);
	long long b[3];
	cin>>b[0]>>b[1]>>b[2];
	sort(b,b+3);
	if(b[0]<=a[0] && b[1]<=a[1]){
		if(b[0]*b[0]+ b[1]*b[1] == b[2]*b[2]){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
	return 0;
}


