#include <iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n]={0};
		int stop=0;
		while(stop==0){
			int dem=0;
			for(int i=0;i<n;i++){
				if(a[i]==1){
					dem++;
				}
			}
			if(dem==k){
				for(int i=0;i<n;i++){
					cout<<a[i];
				}
				cout<<endl;
			}
			int i=n-1;
			while(i>=0 && a[i]==1){
				a[i]=0;
				i--;
			}
			if(i==-1){
				stop=1;
			}
			else{
				a[i]=1;
			}
		}
	}
	return 0;
}
  
