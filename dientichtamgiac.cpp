#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		int a[8];
		for(int i=0;i<8;i++){
			cin>>a[i];
		}
		double x= ((double)(a[2]-a[0])*(double)(a[2]-a[0])+(double)(a[3]-a[1])*(double)(a[3]-a[1]))/((double)k*(double)k*((double)(a[6]-a[0])*(double)(a[6]-a[0])+(double)(a[7]-a[1])*(double)(a[7]-a[1])));
		if(x>1){
			cout<<"No solution";
		}
		else{
			double x1=(double)a[4]-(double)a[0],y1=(double)a[5]-(double)a[1];
			double t=sqrt(x);
			double ans1= (double)a[0]+x1*t,ans2=(double)a[1]+y1*t;
			printf("%.2lf %.2lf\n",ans1,ans2);
		}
	}
	return 0;
}


