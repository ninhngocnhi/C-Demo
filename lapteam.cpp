#include<iostream>
#include <algorithm>
using namespace std;
int main (){
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long maxx=0;
	long long k=0;
	for(int i=0;i<n;i++){
		long long dem=k-i+1;
		for(int j=k+1;j<n;j++){
			if(a[j]-a[i]<=5){
				dem++;
				k=j;
			}
			else{
				break;
			}
		}
		maxx=max(dem,maxx);
	}
	cout<<maxx;
	return 0;
}

