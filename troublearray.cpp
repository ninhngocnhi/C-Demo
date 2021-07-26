#include <iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		long long k;
		cin>>n>>k;
		int dem=1;
		while(k%2==0){
			dem++;
			k=k/2;
		}
		cout<<dem<<endl;
	}
	return 0;
}

