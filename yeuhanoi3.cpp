#include<iostream>
#include <algorithm>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			int check=0;
			if(b[i]==0){
				check=1;
				for(int j=i+1;j<n;j++){
					if(__gcd(a[j],a[i]) > 1){
						check=0;
						b[j]=1;
						break;
					}
				}
			}
			dem+=check;
		}
		if(dem <= 1905){
			cout<<"HaVu"<<endl;
		}
		else if( 1905<dem && dem <=2801){
			cout<<"Yeu Ha Noi"<<endl;
		}
		else{
			cout<<dem<<endl;
		}  
	}
	return 0;
}

