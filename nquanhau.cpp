#include <bits/stdc++.h>
using namespace std;
int n;
int ans[100];
bool a[100], xuoi[100],nguoc[100];
void in(){
	for(int i=1;i<=2*n;i++){
		a[i]=true;
		xuoi[i]=true;
		nguoc[i]=true;
	}
}
void out(){
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(a[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			ans[i]=j;
			a[j]=false;
			xuoi[i-j+n]=false;
			nguoc[i+j-1]=false;
			if(i==n){
				out();
			}
			else{
				Try(i+1);
			}
			a[j]=true;
			xuoi[i-j+n]=true;
			nguoc[i+j-1]=true;
		}
	}
}
int main (){
	cin>>n;
	in();
	Try(1);
	return 0;
}
//Code by Ninh Ngoc

