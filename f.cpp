#include <iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	int a[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int dem=0;
		for(int j=9;j>=0;j--){
			while(n>=a[j]){
				int dem1=n/a[j];
				n=n-dem1*a[j];
				dem+=dem1;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

