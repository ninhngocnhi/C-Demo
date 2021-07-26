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
		int min=a[i],vitri=i;
		for(int j=i+1;j<n;j++){
			if(min>a[j]){
				min=a[j];
				vitri=j; 
			}
		}
		int k=a[i];
		a[i]=a[vitri];
		a[vitri]=k;
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


