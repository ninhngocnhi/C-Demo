#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
double f( double m){
	return a*m*m + b*m +c;
}
int main (){
	cin>>a>>b>>c;
	double l= -1e9 , r= 1e9;
	for( int i=0;i<10000;i++){
		double m1=l+ (r-l)/3;
		double m2 =l+ (r-l)*2/3;
		if( f(m1)<f(m2)){
			r=m2;
		}
		else if( f(m1)>f(m2)){
			l=m1;
		}
	}
	cout<<l<< " "<<(double) -b/(2*a) <<endl;
	return 0;
}

