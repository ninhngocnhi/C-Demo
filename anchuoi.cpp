#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n],b[n]={0};
//	b[n]=0;
	int dem=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j] > a[i] && b[j]==0){
				dem++;
				b[j]=21;
				break;
			}
		}
	}
	cout<<dem;
	return 0;
}

