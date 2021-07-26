#include <bits/stdc++.h>
using namespace std;
int main (){
	string a,b;
	cin>>a>>b;
	int a1=0,a2=0,b1=0,b2=0;
	for(int i=0;i<a.size();i++){
		int t=a[i]-'0';
		if(t==6 || t==5){
			a1=a1*10+5;
			a2=a2*10+6;
			
		}
		else {
			a1=a1*10+t;
			a2=a2*10+t;
		}
	}
	for(int i=0;i<b.size();i++){
		int t=b[i]-'0';
		if(t==6 || t==5){
			b1=b1*10+5;
			b2=b2*10+6;
		}
		else {
			b1=b1*10+t;
			b2=b2*10+t;
		}
	}
	cout<<a1+b1<<" "<<a2+b2;
	return 0;
}


