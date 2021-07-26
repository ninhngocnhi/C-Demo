#include<iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n][n];
	long long b[n][n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(j==0){
				b[i][0]=a[i][0];
			}
			else{
				if(i==0){
					b[0][j]= max(b[i][j-1],b[i+1][j-1])+a[i][j];
				}
				else if(i==n-1){
					b[n-1][j]= max(b[i][j-1],b[i-1][j-1])+a[i][j];
				}
				else{
					b[i][j]= max(max(b[i][j-1],b[i-1][j-1]),b[i+1][j-1])+a[i][j];
				}
			}
		}
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		sum=max(sum,b[i][n-1]);
	}
	cout<<sum;
	return 0;
}

