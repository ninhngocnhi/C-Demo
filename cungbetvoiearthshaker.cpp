#include <bits/stdc++.h>
using namespace std;
int main (){
	int x,s;
	cin>>x>>s;
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		cout<<a[i]-x*s<<" ";
	}
	return 0;
}


