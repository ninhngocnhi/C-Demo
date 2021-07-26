#include <bits/stdc++.h>
using namespace std;
int main (){
	int a[3];
	char b[3];
	for(int i=0;i<3;i++){
		cin>>a[i]>>b[i];
	}
	int c[3]={0};
	for(int i=0;i<3;i++){
		if(b[i]=='s'){
			c[0]++;
		}
		else if(b[i]=='m'){
			c[1]++;
		}
		else{
			c[2]++;
		}
	}
	if(c[0]==3 || c[1] ==3 || c[2]==3 ){
		sort(a,a+3);
		if(a[0]==a[2] || (a[2]-a[1]==1 && a[1]-a[0]==1)){
			cout<<"0";
		}
		else if(a[0]==a[1] || a[2]==a[1]){
			cout<<"1";
		}
		else if(a[1]-a[0]==1 ||a[2]-a[1]==1 ||a[1]-a[0]==2 || a[2]-a[1]==2){
			cout<<"1";
		}
		else{
			cout<<"2";
		}
	}
	else if(c[0]+c[1]==3 || c[0]+c[2]==3 || c[2]+c[1]==3){
		int d[2],u=0;
		if(c[0]==2){
			for(int i=0;i<3;i++ ){
				if(b[i]=='s'){
					d[u]=i;
					u++;
				}
			}
		}
		else if(c[1]==2){
			for(int i=0;i<3;i++ ){
				if(b[i]=='m'){
					d[u]=i;
					u++;
				}
			}
		}
		else{
			for(int i=0;i<3;i++ ){
				if(b[i]=='p'){
					d[u]=i;
					u++;
				}
			}
		}
		int minn=min(a[d[0]],a[d[1]]),maxx=max(a[d[0]],a[d[1]]);
		if(minn==maxx || (0<= maxx-minn && maxx-minn <3)){
			cout<<"1";
		}
		else{
			cout<<"2";
		}
	}
	else{
		cout<<"2";
	}
	return 0;
}


