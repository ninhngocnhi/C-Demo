#include <iostream>
using namespace std;
int main (){
	int R,C,I;
	cin>>R>>C>>I;
	char a[R+1][C+1];
	for(int i=1;i<=R;i++){
			for(int j=1;j<=C;j++){
				a[i][j]='.';
		}
	}
	for(int k=1;k<=I;k++){
		int r1,c1,r2,c2;
		char S;
		cin>>r1>>c1>>r2>>c2>>S;
		for(int i=r1;i<=r2;i++){
			for(int j=c1;j<=c2;j++){
				a[i][j]=S;
			}
		}
	}
	for(int i=1;i<=R;i++){
			for(int j=1;j<=C;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
	return 0;
}

