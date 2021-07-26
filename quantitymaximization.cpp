#include <iostream>
using namespace std;
#define N -1000000009
int main (){
	int n;
	cin>>n;
	long long maxx=N;
	long long a[n],b[n];
	double c[n];
	long long special=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		if(b[i]==0 && a[i]==0){
			special++;
			c[i]==N;
		}
		else{
			c[i]=(float) -b[i]/a[i];
		}
	}
	for(int i=0;i<n;i++){
		long long dem=1;
		if(c[i] != N){
			for(int j=i+1;j<n;j++){
				if(c[j] == c[i]){
					dem++;
					c[j]=N;
				}
			}
			maxx=max(maxx,dem);
		}	
	}
	cout<<maxx;
	return 0;
}
