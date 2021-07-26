#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int c[7]={0,1,2,2,2,2,2};
	int d[7]={0,0,0,0,0,0,1};
	int a=n/7,b=n%7;
	int maxx=0,minn=0;
	maxx=a*2+c[b],minn=a*2+d[b];
	cout<<minn<<" "<<maxx;
	return 0;
}


