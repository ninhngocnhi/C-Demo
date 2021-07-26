#include<iostream>
#include <math.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	long long a[t];
	for(int i=0;i<t;i++){
		cin>>a[i];
		float x=sqrt(a[i]+1);
		for(long j=2;j<=x;j++){
   			while(a[i]%j==0){
   				cout<<j<<" ";
   				a[i]/=j;
			}
		}
		if(a[i]>1){
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}

