#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int dem=0;
	long long sum=0;
	long long max=a[n];
	for(int i=1;i<=n;i++){
		if(sum<=a[i]){
			dem++;
			sum+=a[i];
		}
		if(sum>max){
			break;
		}
	}
	cout<<dem;	
	return 0;
}

