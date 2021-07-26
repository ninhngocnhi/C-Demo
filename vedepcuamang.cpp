#include <bits/stdc++.h>
int n,a[1048600];
using namespace std;
int incre(int x,int y){
	int check=1;
	for(int i=x;i<y;i++){
		if(a[i]>a[i+1]){
			check=0;
			break;
		}
	}
	return check;
}
int main (){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int step=n;
	int ans=0;
	long long sum=0;
	while(step>0 && ans==0){
		int i=0;
		while(i<n){
			if(incre(i,i+step-1)==1){
				ans=step;
				long long s=0;
				for(int j=i;j<i+step;j++){
					s+=a[j];
				}
				sum=max(sum,s);
			}
			i+=step;
		}
		step/=2;
	}
	cout<<ans<<" "<<sum;
	return 0;
}


