#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	long long x;
	cin>>n>>x;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long k=0,check=0,sum=0,ans=0;
	a[n]=x+1;
	for(int i=0;i<n;i++){
		long long dem;
		int check1;
		if(check>i){
			dem=k-1;
			check1=check;
			sum=sum-a[i-1]-a[check];
		}
		else{
			dem=0;
			check1 = i;
			sum=0;
		}
		for(int j=check1;j<n+1;j++){
			sum+=a[j];
			if(sum<x){
				dem++;
			}
			else{
				ans+=dem;
				k=dem;
				check=j;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}


