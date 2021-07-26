#include<iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int x;
	int max=0,min=101,vt1=0, vt2=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(min>=x){
			min=x;
			vt1=i;
		}
		if(max<x){
			max=x;
			vt2=i;
		}
	}
	int ans=0;
	if(vt1 < vt2){
		ans= n - vt1 + vt2 - 2;
	}
	else{
		ans= n - vt1 + vt2 - 1;
	}
	cout<<ans;
	return 0;
}
 
