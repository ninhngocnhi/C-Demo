#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	if(n==0){
		cout<<10;
	}
	else if(n==1){
		cout<<1;
	}
	else{
		int a[10]={0};
		for(int i=9;i>=2;i--){
			while(n%i==0){
				a[i]++;
				n/=i;
			}
		}
		if(n==1){
			for(int i=2;i<10;i++){
				while(a[i]){
					cout<<i;
					a[i]--;
				}
			}
		}
		else{
			cout<<"-1";
		}
	}
	return 0;
}


