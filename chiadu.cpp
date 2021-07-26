#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int check=1;
	long long x=a[0]-b[0];
	if(x<0){
		cout<<"-1";
	}
	else if(x==0){
		x=1;
		for(int i=1;i<n;i++){
			if(a[i] != b[i]){
				check=0;
				break;
			}
		}
		if(check==0){
			cout<<"-1";
		}
		else{
			cout<<x;	
		}
	}
	else{
		long long c[n];
		int u=0;
		for(int i=1;i<sqrt(x);i++){
			if(x%i==0){
				c[u]=i;
				u++;
				c[u]=x/i;
				u++;
			}
		}
		if(x% (long long)sqrt(x)==0){
			c[u]=sqrt(x);
			u++;
		}
		sort(c,c+u);
		int d[u]={0};
		for(int i=1;i<n;i++){
			int dem=0;
			for(int j=0;j<u;j++){
				if(a[i] % c[j] == b[i]){
					dem++;
					d[j]++;
				}
			}
			if(dem==0){
				check=0;
				break;
			}
		}
		if(check==0){
			cout<<"-1";
		}
		else{
			for(int i=0;i<u;i++){
				if(d[i]==n-1){
					cout<<c[i];
					check=0;
					break;
				}
			}
			if(check==1){
				cout<<"-1";
			}
		}
	}
	return 0;
}


