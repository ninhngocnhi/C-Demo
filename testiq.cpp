#include <bits/stdc++.h>
using namespace std;
int main (){
	char a[4][4];
	int check=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int d1=0,d2=0;
			for(int x=i;x<=i+1;x++){
				for(int y=j;y<=j+1;y++){
					if(a[x][y]=='.'){
						d1++;
					}
					else{
						d2++;
					}
				}
			}
			if(d1==4 || d2==4 || d1==3 || d2==3){
				check=1;
				break;
			}
		}
		if(check==1){
			break;
		}
	}
	if(check==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}


