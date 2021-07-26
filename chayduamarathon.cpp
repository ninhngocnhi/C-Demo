#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		int x,y,z;
		cin>>x>>y>>z;
		a[i]=x*3600+60*y+z;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		int x=a[i]/3600;
		int y=(a[i]-x*3600)/60;
		int z=a[i]-x*3600-60*y;
		printf("%d %d %d\n",x,y,z);
	}
	return 0;
}
