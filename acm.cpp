#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int tong=0,sum=0,dem=0,index=0;
	while(tong+a[index]<=300 && index<n){
		tong+=a[index];
		sum+=tong;
		dem++;
		index++;
	}
	cout<<dem<<" "<<sum;
	return 0;
}


