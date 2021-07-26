#include <bits/stdc++.h>
#include <vector>  
#define N 200005
using namespace std;
int main (){
	int n;
	cin>>n;
	vector<int> d(N,0);
	d[1]=1;
	for(int i=2; i*i<=N; i++){
		if( d[i]==0 ){	
			for(int j=2; j<=N/i; j++) d[i*j] = 1;
		}
	}
	long long sum=0;
	while(n--){
		int a;
		cin>>a;
		if(a==1){
			sum++;
		}
		else{
			if(d[a]==0){
				sum+=a;
			}
			else{
				for(int i=2;i<=sqrt(a);i++){
					if(a%i==0){
						while((a%i==0)){
							sum+=i;
							a=a/i;
						}
					}
				}
				if(a>1){
					sum+=a;
				}
			}
		}	
	}
	cout<<sum;
	return 0;
}


