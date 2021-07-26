#include <iostream>
#include <algorithm>
# define M 100000007
using namespace std;
void datbang0(int a[],int n,int x){
	for(int i=x;i<n;i++){
		a[i]=0;
	}
}
long long dem(long long n){
	if(n==1){
		return 1;
	}
	else{
		int a[n];
		for(int i=0;i<n;i++){
			a[i]=i+1;
		}
		long long dem=0;
		int b[1000]={0};
		int i=n-1;
		while(i>0){
			long long sum=0;
			if(b[i]==1){
				i--;
			}
			if(b[i]==0){
				b[i]=1;
				datbang0(b,n,i+1);
				for(int j=n-1;j>=0;j--){
					if(b[j]==1){
						sum+=a[j];
					}
				}
				i=n-1;
			}
			if(sum==n){
				dem++;
				dem=dem%M;
			}
		}
		return dem;
	}
}
int main (){
	long long d,s;
	cin>>d>>s;
	long long k=s/d;
	cout<< dem(k);
	return 0;
}

