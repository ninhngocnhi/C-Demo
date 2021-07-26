#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	if(n>2){
		int s,check;
		for(int i=1;i<=n-2-n%3;i+=3){
			s=( a[i][i+1]+a[i][i+2]-a[i+1][i+2] )/2;
			check =a[i][i+2]-s;
			cout<< s <<" "<< a[i][i+1] -s <<" "<<a[i][i+2]-s<<" ";	
		}
		if(n%3==1){
			cout<< a[n-1][n]- check ;
		}
		else if (n%3==2){
			int b= a[n-2][n-1]-check;
			int c= a[n-1][n] -b;
			cout << b<<" "<<c;
		}
	}
	else if(n==2){
		int s = a[1][2];
		cout <<s/2<<" "<< s-s/2;
	}
	else if(n==1){
		cout << a[1][1];
	}
	return 0;
}

