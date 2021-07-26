#include<iostream>
using namespace std;
int check(int c[] , int n,int m){
	int dem=1;
	for(int i=n;i<=m-1;i++){
		if(c[i]<=c[i+1]) dem++;
		else return 1;
	}
	return dem;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxx=1;
	int check2=1,check4=1,check8=1,check16=1;
	int i=1,j=2;
	if(n>=2)
	while(1){
	check2=max(check2,check(a,i,j));
	i++;
	j++; 
	if(j>n) break;
	}
	int x=1,y=4;
	if(n>=4)
	while(1){
		check4=max(check4,check(a,x,y));
		x=y+1;
		y+=4;
		if(y>n) break;
	}
	x=1,y=8;
	if(n>=8)
	while(1){
		check8=max(check8,check(a,x,y));
		x=y+1;
		y+=8;
		if(y>n) break;
	}
	if(n==16) check16=max(check16,check(a,1,16));
	cout<<max(max(max(check2,check4),check8),check16);
}
