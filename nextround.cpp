#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n,k;
	cin>> n >>k;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int dem;
	if(a[k]>0){
		dem=k;
		for(int i=k+1;i<=n;i++){
			if(a[i]==a[k] ){
				dem++;
			} 
		}
	}
	else if(a[k]==0){
		dem=0;
		for(int i=1;i<=k-1;i++){
			if(a[i]> 0 ){
				dem++;
			}
		}
	}
	cout<<dem;
	return 0;
}

