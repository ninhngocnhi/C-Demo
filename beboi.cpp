#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		float v,x;
		cin>>n>>v>>x;
		float a[2*n];
		for(int j=0;j<2*n;j++){
			cin>>a[j];
		}
		if(n==1){
			if(a[1]==x){
				double ans=v/a[0];
				printf("Case #");
				printf("%d",i);
				printf(": ");
				printf("%.3lf",ans);
				printf("\n");
			}
			else{
				cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
			}
		}
		else if(n==2){
			double ans1=0,ans2=0,ans3=0;
			if(a[1]==x){
				ans1=v/a[0];
			}
			if(a[3]==x){
				ans1=v/a[2];
			}
			double v1= (x-a[1])/(a[1]-a[3]);
			double v2= (x-a[3])/(a[3]-a[1]);
			if(v1>0 && v2>0){
				ans3= v1/a[0] + v2/a[2];
			}
			double ans=min(ans1,min(ans2,ans3));
			if(ans==0){
				cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
			}
			else{
				printf("Case #");
				printf("%d",i);
				printf(": ");
				printf("%.3lf",ans);
				printf("\n");
			}
		}
	}
	return 0;
}


