#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	unsigned long long b[n][n];
	b[0][0]=a[0][0];
	for(int i=1;i<n;i++){
		b[i][0]=b[i-1][0]*10+a[i][0];
	}
	for(int j=1;j<n;j++){
		b[0][j]=b[0][j-1]*10+a[0][j];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			b[i][j]=min(b[i-1][j],b[i][j-1])*10+a[i][j];
		}
	}
	unsigned long long s=b[n-1][n-1];
	
	return 0;
}


