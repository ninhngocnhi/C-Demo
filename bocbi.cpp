#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[2][n];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	long long b[2][n];
	b[0][0]=a[0][0],b[1][0]=a[1][0];
	long long max0=a[0][0],max1=a[1][0];
	for(int j=1;j<n;j++){
		for(int i=0;i<2;i++){
			if(i==0){
				b[i][j]=max1+a[i][j];
			}
			else{
				b[i][j]=max0+a[i][j];
			}
		}
		max0=max(max0,b[0][j]);
		max1=max(max1,b[1][j]);
	}
//	cout<<endl;
//	for(int i=0;i<2;i++){
//		for(int j=0;j<n;j++){
//			cout<<b[i][j]<< " ";
//		}
//		cout<<endl;
//	}
	
	cout<<max(b[0][n-1],b[1][n-1]);
	return 0;
}


