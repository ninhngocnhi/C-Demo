#include <bits/stdc++.h>
using namespace std;
int main (){
	string n;
	cin>>n;
	int len=n.size();
	int x=len%3, y=(len-1)/3;;
	if(x==0){
		for(int i=0;i<len;i++){
			if(i%3==0 && y>0 && i!=0){
				cout<<",";
				y--;
			}
			cout<<n[i];
		}	
	}
	else{
		for(int i=0;i<x;i++){
			cout<<n[i];
		}
		for(int i=x;i<len;i++){
			if((i-x)%3==0 && y>0){
				cout<<",";
				y--;
			}
			cout<<n[i];
		}
	}
	return 0;
}


