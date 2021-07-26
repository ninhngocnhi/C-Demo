#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int check=1;
	char a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='.'){
				if(i+2<n && j-1 >=0 && j+1<n){
					if(a[i+1][j]=='.' && a[i+1][j-1]=='.' && a[i+1][j+1]=='.' && a[i+2][j]=='.'){
						a[i+1][j]='#';
						a[i+1][j-1]='#';
						a[i+1][j+1]='#';
						a[i+2][j]='#';
					}
					else{
						check=0;
					}
				}
				else{
					check=0;
				}
			}
			if(check==0){
				break;
			}
		}
		if(check==0){
			break;
		}
	}
	if(check==0){
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
	return 0;
}


