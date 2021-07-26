#include<iostream>
#include <algorithm>
using namespace std;
int main (){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	long long b[m][n]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<m;i++){
			if(j==0){
				b[i][0]=a[i][0];
			}
			else if(j==1){
				if(i==0||i==1){
					b[i][j]=b[i+2][j-1]+a[i][j];
				}
				else if(i==m-1||i==m-2){
					b[i][j]=b[i-2][j-1]+a[i][j];
				}
				else{
					b[i][j]=min(b[i-2][j-1],b[i+2][j-1])+a[i][j];
				}
			}
			else{
				if(i==0){
					b[0][j]=min(b[1][j-2],b[2][j-1])+a[i][j];
				}
				else if(i==1){
					b[1][j]= min(min(b[i-1][j-2],b[i+1][j-2]),b[i+2][j-1])+a[i][j];
				}
				else if(i==m-1){
					b[m-1][j]= min(b[m-2][j-2],b[m-2][j-1])+a[i][j];
				}
				else if(i==m-2){
					b[m-2][j]= min(min(b[m-1][j-2],b[m-3][j-2]),b[m-4][j-1])+a[i][j];
				}
				else{
					b[i][j]=min(min(min(b[i-2][j-1],b[i+2][j-1]),b[i-1][j-2]),b[i+1][j-2])+a[i][j];
				}
			}
		}
	}
	long long sum=100;
	for(int i=0;i<m;i++){
		sum=min(sum,b[i][m-1]);
	}
	cout<<100-sum;
	return 0;
}
//5 5
//2 6 5 0 5
//13 22 10 11 7
//4 7 12 3 9
//5 4 20 4 11
//6 5 1 5 13
