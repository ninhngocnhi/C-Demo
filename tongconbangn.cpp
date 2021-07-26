#include <bits/stdc++.h>
using namespace std;
int n,sum;
int a[100];
void out(int x){
	for(int i=1;i<=x;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for(int j=a[i-1];j<=n-sum;j++){
		sum+=j;
		a[i]=j;
		if(sum==n){
			out(i);
		}
		else{
			Try(i+1);
		}
		sum-=j;
	}
}
int main (){
	cin>>n;
	sum=0;
	a[0]=1;
	Try(1);
	return 0;
}
//Code by Ninh Ngoc

