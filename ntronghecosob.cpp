#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,b;
	cin>>n>>b;
	string s="0123456789ABCDEFGHIKLMNOPQRSTUVWXYZ";
	string ans="";
	while(n){
		ans+=s[n%b];
		n/=b;
	}
	for(int i=ans.size()-1;i>=0;i--){
		cout<<ans[i];
	}
	return 0;
}
//Code by Ninh Ngoc

