#include <bits/stdc++.h>
using namespace std;
#define M 100000007
long long p[10000],hash[10000];
long long gethash(int i,int j){
	return(hash[j]-hash[i-1]*p[j-i+1]+M*M)%M;
}
int main (){
	string s;
	cin>>s;
	int l=s.size();
	cout<<l<<endl;
	int k=26;
	p[0]=1;
	for(int i=1;i<l;i++){
		p[i]=k*p[i-1]%M;
	}
	hash[0]=0;
	for(int i=1;i<l;i++){
		int x=s[i-1]-48;
		hash[i]=(hash[i-1]*k +x)%M;
	}
	while(1){
		int u,v,x,y;
		cin>>u>>v>>x>>y;
		if(gethash(u,v) == gethash(x,y)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}


