#include <bits/stdc++.h>
using namespace std;
int main (){
	int s,b;
	cin>>s>>b;
	long long a[s];
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	long long d[b];
	int g[b];
	for(int i=0;i<b;i++){
		cin>>d[i]>>g[i];
	}
	for(int i=0;i<b;i++){
		for(int j=0;j<b-i;j++){
			if(d[j]>d[i]){
				long long t=d[i];
				d[i]=d[j];
				d[j]=t;
//				swap(d[j],d[i]);
//				swap(g[j],g[i]);
			}
		}
	}
	for(int i=0;i<b;i++){
		cout<<d[i]<<" "<<g[i]<<endl;
	}
	return 0;
}


