#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long left[n],right[n];
	long long sum1=0,sum2=0;
	for(int i=0;i<n-1;i++){
		sum1+=a[i];
		left[i]=sum1;
		sum2+=a[n-1-i];
		right[n-1-i]=sum2;
	}
	long long dem=0,i=0,j=n-1;
	while(i<n-1 && j>0 && j>i){
		if(left[i]==right[j]){
			dem=max(dem,left[i]);
			i++;
			j--;
		}
		else if(left[i]<right[j]){
			i++;
		}
		else{
			j--;
		}
	}
	cout<<dem;
	return 0;
}

