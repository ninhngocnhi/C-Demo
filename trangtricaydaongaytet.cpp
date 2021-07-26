#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
	int min=200;
	if(a<=min) min=a;
	if(b<=min) min=b;
	if(c<=min) min=c;
	 if( c==min) cout<<c*3-3;
	else if (b==min) cout<<b*3;
	else if( a==min && c-a==1 ) cout<<c*3-3;
	else if(a==min && c-a>=2) cout<<a*3+3;
}
