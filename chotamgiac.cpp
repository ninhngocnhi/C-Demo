#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,h;
		cin>>n>>h;
		for(int i=1;i<n;i++){
			double x= sqrt( (double)i / (double)n ) * double(h);
			printf("%.6lf ",x);
		}
		cout<<endl;
	}
	return 0;
}


