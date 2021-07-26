#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100007];
int cnp(long long a[], int x,int y, long long z){ 
	int l = x;
	int r = y;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (z == a[mid]) 
			return mid;
		else if (z < a[mid]) 
			r = mid - 1;
		else if (z > a[mid]) 
			l = mid + 1;
	} 
	return -1;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i]*=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				long long x=a[i]+a[j];
				if (cnp(a,j+1,n-1,x) != -1){
					dem=1;
				}
				if(dem==1){
					break;
				}
			}
			if(dem==1){
				break;
			}
		}
		if(dem==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


