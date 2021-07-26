#include <bits/stdc++.h>
using namespace std;
struct inf{
	int a,b;
};
int main (){
	int t;
	cin>>t;
	inf ds[t];
	for(int i=0;i<t;i++){
		cin>>ds[i].a>>ds[i].b;
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t-i-1;j++){
			if(ds[j].a<ds[j+1].a){
				inf k=ds[j];
				ds[j]=ds[j+1];
				ds[j+1]=k;
			}
		}
	}
	for(int i=0;i<t;i++){
		cout<<ds[i].a<<" "<<ds[i].b<<endl;
	}
	return 0;
}


