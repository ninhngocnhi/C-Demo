#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n]={0};
	for(int i=0;i<n;i++){
		b[0]=a[i];
		sort(b,b+n);
		cout<<"Buoc "<<i<<": ";
		for(int j=n-i-1;j<n;j++){
			cout<<b[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


