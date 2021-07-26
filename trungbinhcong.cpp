#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n;
	cin>>n;
	long long a[n];
	int max=0,vt;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(max<=a[i]){
			max=a[i];
			vt=i;
		}
	}
	int d=1;
	for(int i=vt-1;i>=0;i--){
		if(a[i]==max){
			d++;
		}
		else{
			break;
		}
	}
	cout<<d;
	return 0;
}


