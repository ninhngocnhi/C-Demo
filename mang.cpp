#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			for(int j=i+1;j>=0;j--){
				if(a[j]<a[j-1]){
					int k=a[j];
					a[j]=a[j-1];
					a[j-1]=k;
				}
			}
		}
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

