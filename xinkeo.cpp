#include<iostream>
using namespace std;
typedef unsigned long long ull;
#define M 1000000007
int main ()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	ull ans=0;
	ull x=1,y=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}	
	ull sum=1;
	for(int i=0;i<n;i++){
		if(a[i]==1) y=(y+b[i])%M;
		else {
			x=(x*b[i])%M;
			y=(y*b[i])%M;
		}
	}
	while(m>-1){
		sum=(x*sum+y);//%M;
		m--;
	}
 	cout<<sum;
}
