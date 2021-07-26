#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int x=0;
		for(int i=0;i<n;i++){
			cin>>b[i];
			x=x^(a[i]%(b[i]+1));
		}
		if(x==0){
			cout<<"Second"<<endl;
		}
		else{
			cout<<"First"<<endl;
		}
	}
	return 0;
}


