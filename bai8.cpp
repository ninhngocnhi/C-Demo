#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int check=1,index=1;
	while(check==1){
		check=0;
		for(int j=0;j<n;j++){
			if(a[j]>a[j+1]){
				check=1;
				swap(a[j],a[j+1]);
			}
		}
		if(check==1){
			cout<<"Buoc "<<index<<": ";
			for(int j=0;j<n;j++){
				cout<<a[j]<<" ";
			}
			cout<<endl;
			index++;
		}
	}
	
	return 0;
}


