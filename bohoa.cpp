#include<iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n];
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	int m,x;
	cin>>m;
	for(int i=0;i<m;i++){
		long long s=sum;
		cin>>x;
		cout<<s-a[n-x]<<endl;
	}
	return 0;
}

