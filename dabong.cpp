#include <bits/stdc++.h>
using namespace std;
int main (){
	double y1,y2,yw,xb,yb,r;
	cin>>y1>>y2>>yw>>xb>>yb>>r;
	if(2*r>=y2-y1) cout<<"-1";
	else{
		double t= (y1 - yw + 2*r)/(yb-yw+r);
		double ans= xb*t/(t+1);
		printf("%.10lf",ans);
	}
	return 0;
}


