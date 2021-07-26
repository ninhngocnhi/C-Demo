#include <bits/stdc++.h>
using namespace std;
int main (){
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	int a,b;
	cin>>a>>b;
	int d;
	cin>>d;
	float t=(float)a/(float)(a+b);
	int x0=x1+(float)(x2-x1)*t, y0=y1+(float)(y2-y1)*t;
	if(d==1){
		cout<<x0+(y2-y1)<<" "<<y0+(x1-x2);
	}
	else if(d==2){
		cout<<x0-(y2-y1)<<" "<<y0-(x1-x2);
	}
	return 0;
}


