#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long A[n];
	long long ans1=0,ans2;
	for(int i=0;i<n;i++){
		cin>>A[i];
		if(A[i]>0){
			A[i]=1;
		}
		else{
			A[i]=-1;
		}
	}
	for(int i=0;i<n;i++){
		int s=1,x=0,d=1;
		for(int j=i+1;j<n;j++){
			if(A[i]*A[j]>0){
				d++;
			}
			else{
				break;
			}
		}
		for(int j=i;j<n;j++){
			s*=A[j];
			if(s>0){
				x++;
			}
		}
		if(A[i]>0){			
			ans1+= (2*x+1-d)*d /2;
		}
		else{
			if(d==1){
				ans1+=x;
			}
			else{
				int x1=0,s1=1;
				for(int j=i+1;j<n;j++){
					s1*=A[j];
					if(s1>0){
						x1++;
					}
					int d2=d/2,d1=d-d2;
					ans1+=(2*x+1-d1)*d1 /2;
					ans1+=(2*x1+1-d2)*d2 /2;
				}
			}
		}
		i=i+d-1;
	}
	cout<<(n*n+n)/2-ans1<<" "<<ans1;
	return 0;
}
//Code by Ninh Ngoc
