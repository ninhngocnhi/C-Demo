#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	unsigned long long A[501]={0};
	for(int i=1;i<501;i++){
		if(9%i==0){
			A[i]=9;
		}
		else{
			int check=0;
			for(int n=1;;n++){
				int a[n]={0};
				int stop=0;
				while(stop==0){
					unsigned long long s=9;
					for(int j=0;j<n;j++){
						s=s*10+a[j];
					}
					if(s%i==0){
						A[i]=s;
						check=1;
					}
					if(check==1){
						break;
					}
					int j=n-1;
					while(j>=0 && a[j]==9){
						a[j]=0;
						j--;
					}
					if(j==-1){
						stop=1;
					}
					else{
						a[j]=9;
					}
				}
				if(check==1){
					break;
				}
			}
		}
	}
	while(t--){
		int n;
		cin>>n;
		cout<<A[n]<<endl;
	}
	return 0;
}


