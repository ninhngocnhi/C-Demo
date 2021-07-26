#include <bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
};
int comp(node a, node b){
	return (a.x < b.x);
}
int main (){
	node a[100];
	int i,n,k;
	cin>>n>>k;
	for (int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a,a+n,comp);
	for (int i=0;i<n;i++){
		if (k>=a[i].x){
			k=k+a[i].y;
		}
		else break;
	}
	if(i==n){
		i--;
	}
	cout<<"kill: "<< i+1 <<endl;
	return 0;
}


