#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int h=0,l=n-1;
	long long th=0,tl=0;
	while(l>h){
		if(th==tl){
			th+=a[h];
			tl+=a[l];
			h++;
			l--;
		}
		else if(th>tl){
			tl+=a[l];
			l--;
		}
		else{
			th+=a[h];
			h++;
		}
	}
	if(h==l){
		if(th<=tl){
			h++;
		}
	}
	cout<<h<<" "<<n-h;
	return 0;
}


