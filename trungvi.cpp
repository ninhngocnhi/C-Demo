#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	long long s;
	cin>>n>>s;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long m=a[n/2];
	long long dem=0;
	if(s==m){
		dem=0;
	}
	else if(s<m){
		for(int i=n/2;i>=0;i--){
			if(a[i]>s){
				dem+=a[i]-s;
			}
			else{
				break;
			}
		}
	}
	else{
		for(int i=n/2;i<n;i++){
			if(a[i]<s){
				dem+=s-a[i];
			}
			else{
				break;
			}
		}
	}
	cout<<dem;
	return 0;
}

