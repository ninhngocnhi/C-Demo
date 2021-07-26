#include <iostream>
using namespace std;
int main (){
	int n,k;
	cin>>n>>k;
	int a[n+1]={0};
	a[n]=2;
	int stop=0,ans=0;
	while(stop==0){
		int d1=0;
		for(int i=0;i<n;i++){
			int pos=i;
			if(a[i]==0){
				int dem=1;
				for(int j=i+1;j<n+1;j++){
					if(a[j]==a[i]){
						dem++;
					}
					else{
						pos=j;
						break;
					}
				}
				if(dem==k){
					d1++;
				}	
			}
			i=pos;
		}
		if(d1==1){
			ans++;
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
	cout<<ans<<endl;
	
	int b[n+1]={0};
	b[n]=2;
	int stop1=0;
	while(stop1==0){
		int d1=0;
		for(int i=0;i<n;i++){
			int pos=i;
			if(b[i]==0){
				int dem=1;
				for(int j=i+1;j<n+1;j++){
					if(b[j]==b[i]){
						dem++;
					}
					else{
						pos=j;
						break;
					}
				}
				if(dem==k){
					d1++;
				}	
			}
			i=pos;
		}
		if(d1==1){
			for(int i=0;i<n;i++){
				if(b[i]==1){
					cout<<"B";
				}
				else{
					cout<<"A";
				}
			}
			cout<<endl;
		}
		int i=n-1;
		while(i>=0 && b[i]==1){
			b[i]=0;
			i--;
		}
		if(i==-1){
			stop1=1;
		}
		else{
			b[i]=1;
		}
	}
	return 0;
}
  
