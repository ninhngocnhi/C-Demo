#include<iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		int a,b,c,dem=0;
		cin>>a>>b>>c;
		if(a==1){
			dem++;
		}
		if(b==1){
			dem++;
		}
		if(c==1){
			dem++;
		}
		if(dem >= 2){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

