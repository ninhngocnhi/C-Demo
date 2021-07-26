#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin>>n>>k;
	long long a[n],sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	int x=0;
	for(int i=0;i<k;i++){
		if(a[i]<0){
			x++;
		}
		else{
			break;
		}
	}
	if(x==0){
		if(k%2==1){
			sum-= 2*a[0];
		}
	}
	else{
		if(x>=k){
			for(int i=0;i<k;i++){
				sum-= 2*a[i];
			}
		}
		else{
			if(x%2 == k%2){	
				for(int i=0;i<x;i++){
					sum-= 2*a[i];
				}
			}
			else{
				if(-a[x-1]<=a[x]){
					for(int i=0;i<x-1;i++){
						sum-= 2*a[i];
					}
				}
				else{
					for(int i=0;i<x+1;i++){
						sum-= 2*a[i];
					}
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
