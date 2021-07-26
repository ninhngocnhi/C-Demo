#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin>>n>>m;
	char A[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>A[i][j];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int check=1;
		for(int j=min(b,d)+1;j<max(b,d);j++){
			if(A[a][j]=='#'){
				check=0;
				break;
			}
		}
		if(check==1){
			for(int i=min(a,c)+1;i<max(a,c);i++){
				if(A[i][d]=='#'){
					check=0;
					break;
				}
			}
		}
		if(check==1){
			cout<<"YES";
		}
		else{
			//c,b
			int check1=1;
			for(int j=min(b,d)+1;j<max(b,d);j++){
				if(A[c][j]=='#'){
					check1=0;
					break;
				}
			}
			if(check1==0){
				cout<<"NO";
			}
			else {
				for(int i=min(a,c)+1;i<max(a,c);i++){
					if(A[i][d]=='#'){
						check1=0;
						break;
					}
				}
				if(check1==1){
					cout<<"YES";
				}
				else{
					cout<<"NO";
				}
			}
		}
	}
	return 0;
}


