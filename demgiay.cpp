#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin>>n>>m;
	int min,max;
	if(n<m){
		min=n;
		max=m;
	}
	else{
		min=m;
		max=n;
	}
	int ans=(max-min)/2;
	cout<<min<<" "<<ans;
	return 0;
}


