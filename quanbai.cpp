#include <bits/stdc++.h>
using namespace std;
int main (){
	int r,c;
	cin>>r>>c;
	char a[2*r][2*c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			a[i][2*c-1-j]=a[i][j];
			a[2*r-1-i][j]=a[i][j];
			a[2*r-1-i][2*c-1-j]=a[i][j];
		}
	}
	int x,y;
	cin>>x>>y;
	if(a[x-1][y-1]=='.'){
		a[x-1][y-1]='#';
	}
	else{
		a[x-1][y-1]='.';
	}
	for(int i=0;i<2*r;i++){
		for(int j=0;j<2*c;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}


