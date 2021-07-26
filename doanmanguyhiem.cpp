#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int dem=0;
	for(int i=0;i<n-2;){
		if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0'){
			a[i+2]='1';
			dem++;
		}
		else i++;
	}
	cout <<dem;
	return 0;
}
