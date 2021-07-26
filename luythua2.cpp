#include <bits/stdc++.h>
using namespace std;
int dem(unsigned long long n){
	int x;
	while(n>0){
		if(0<n && n<10){
			x=n;
		}
		n/=10;
	}
	return x;
}
int main (){
	int a,b;
	cin>>a>>b;
	unsigned long long s1;
	int s2[62];
	s1=2,s2[0]=2;
	for(int i=1;i<62;i++){
		s1*=2;
		s2[i]=dem(s1);
	}
	for(int i=a;i<62;i++){
		if(s2[i]==b){
			cout<<i+1;
			break;
		}
	}
	return 0;
}


