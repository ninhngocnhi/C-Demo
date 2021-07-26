#include <bits/stdc++.h>
using namespace std;
int main (){
	int m,n,k;
	cin>>m>>n>>k;
	int doi=min(m/2,n);
	int du=m+n-doi*3;
	if(du>=k){
		cout<<doi;
	}
	else{
		int t=(k-du)/3;
		if((k-du) % 3 != 0){
			t++;
		}
		cout<<doi-t;
	}
	return 0;
}


