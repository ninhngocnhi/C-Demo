#include <bits/stdc++.h>
using namespace std;
struct id{
	long long dif;
	int mon;
};
int main (){
	int s,b;
	cin>>s>>b;
	long long a[s];
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	id ds[b];
	for(int i=0;i<b;i++){
		cin>>ds[i].dif>>ds[i].mon;
	}
	for(int i=0;i<b;i++){
		for(int j=0;j<b-i-1;j++){
			if(ds[j].dif>ds[j+1].dif){
				id tmp=ds[j];
				ds[j]=ds[j+1];
				ds[j+1]= tmp;
			}
		}
	}
	for(int i=0;i<s;i++){
		long long ans=0;
		for(int j=0;j<b;j++){
			if(a[i]>= ds[j].dif){
				ans+= ds[j].mon;
			}
			else{
				break;
			}
		}
		cout<<ans<<" ";
	}
	return 0;
}


