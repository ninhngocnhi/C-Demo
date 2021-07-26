#include<iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	for(int i=1;i<=n;i++){
		cout << a[i]<<" ";
	}
	for(int i=n;i>0;i--){
		for(int j=n-1;j>0;j--){
			if(a[j]<a[i]){
				int k=a[i];
				a[i]=a[j];
				a[j]=a[i];
				for(int k=1;k<=n;k++){
					cout << a[k];
				}
			}
		}
	}
	return 0;
}

