#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	char a[n][n],x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]!='.'){
				x=a[i][j];
			}
		}
	}
	int check1=0,check2=0,check=0;;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j] !='.'){
				if(j+2<n && a[i][j]==a[i][j+1] && a[i][j]==a[i][j+2]){
					check=1;
					if(a[i][j]==x){
						check1=1;
					}
					else{
						y=a[i][j];
						check2=1;
					}
				}
				if(i+2<n && a[i][j]==a[i+1][j] && a[i][j]==a[i+2][j]){
					check=1;
					if(a[i][j]==x){
						check1=1;
					}
					else{
						y=a[i][j];
						check2=1;
					}
				}
				if(j+2<n && i+2<n && a[i][j]==a[i+1][j+1] && a[i][j]==a[i+2][j+2]){
					check=1;
					if(a[i][j]==x){
						check1=1;
					}
					else{
						y=a[i][j];
						check2=1;
					}
				}
				if(j-2>=0 && i+2<n && a[i][j]==a[i+1][j-1] && a[i][j]==a[i+2][j-2]){
					check=1;
					if(a[i][j]==x){
						check1=1;
					}
					else{
						y=a[i][j];
						check2=1;
					}
				}
				if(check==1){
					break;
				}
			}
		}
		if(check==1){
			break;
		}
	}
	if(check==0){
		cout<<"ongoing";
	}
	else{
		if(check1==1){
			cout<<x;
		}
		else{
			cout<<y;
		}
	}
	return 0;
}


