#include <bits/stdc++.h>
using namespace std;
int main (){
	int a[7]={0,8,16,24,4,12,20};
	int n;
	cin>>n;
	if(n%7==0){
		int x=n/7;
		for(int i=0;i<x;i++){
			cout<<"7";
		}
	}
	else{
		int i4=a[n%7]/4,i7=(n-a[n%7])/7;
		if(i7>=0){
			for(int i=0;i<i4;i++){
				cout<<"4";
			}
			for(int i=0;i<i7;i++){
				cout<<"7";
			}
		}
		else{
			cout<<"-1";
		}
	}
	return 0;
}


