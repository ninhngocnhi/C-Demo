#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int x;
	cin>>x;
	int ans=0;
	int dem=0;
	while (x>9){
		int a=x%10;
		if(a>4){
			a=9-a;
			ans+=pow(10,dem)*a;
		}
		else{
			ans+=pow(10,dem)*a;
		}
		x=x/10;
		dem++;
	}
	if( 4<x && x<9){
		x=9-x;
		ans+=pow(10,dem)*x;
	}
	else{
		ans+=pow(10,dem)*x;
	}
	cout<<ans;
	return 0;
}

