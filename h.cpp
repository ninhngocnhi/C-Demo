#include <iostream>
#define M -10000000000
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[n],c[n],k=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]!=M){
				int dem=1;
				for(int j=i+1;j<n;j++){
					if(a[j]==a[i]){
						dem++;
						a[j]=M;
					}
				}
				b[k]=a[i];
				c[k]=dem;
				k++;
			}
		}
		int check=1;
		while(check!=0){
			int m=0,index=0;
			int check=0;
			for(int i=0;i<k;i++){
				if(c[i]>m && c[i]!=0){
					m=c[i];
					index=i;
					check=1;
				}
			}
			if(check==1){
				while(m--){
					cout<<b[index]<<" ";
				}
				c[index]=0;
			}
			if(check==0){
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}

