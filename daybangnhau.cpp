#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	long long k;
	cin>>n>>k;
	long long a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	sort(b,b+n);
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	long long dem=0;
	long long x;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			dem++;
			x=a[i]-b[i];
		}
		if(dem>1){
			break;
		}
	}
	if(dem==1 && abs(x)<=k || dem==0){
		cout<<"YES";
	}
	else{
		if(abs(a[0]-b[n-1])<=k || abs(a[n-1]-b[0])<=k){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	return 0;
}

