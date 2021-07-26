#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int a[9][9];
		string s;
		int poi[5],poj[5],u=0;
		for(int i=0;i<9;i++){
			cin>>s;
			int j=0;
			for(int k=0;k<9;k++){
				a[i][j]=s[k]-'0';
				if(a[i][j]==0){
					poi[u]=i;
					poj[u]=j;
					u++;
				}
				j++;
			}
		}
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout <<a[i][j]<<" ";
			}
			cout<<endl;
		}
		for(int i=0;i<5;i++){
			cout<<poi[i]<<" "<<poj[i]<<endl;
		}
	}
	return 0;
}


