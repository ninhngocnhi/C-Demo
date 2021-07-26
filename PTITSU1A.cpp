#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		a[n]=1000006;
		a[n+1]=1000008;
		
		int ans=0;
		int b[2],c[2]={0};
		for(int i=0;i<n-1;i++){
			b[0]=a[i],c[0]=1,c[1]=0;
			int check=0;
			for(int j=i+1;j<n+2;j++){
				if(a[j]==b[0]){
					c[0]++;
				}
				else if(a[j] != b[0] && check==0){
					b[1]=a[j];
					c[1]=1;
					check=1;
				}
				else if(a[j]==b[1]){
					c[1]++;
				}
				else if(a[j] != b[0] && a[j] != b[1]){
					ans= max(ans,max(c[0],c[1]));
					break;
				}
				else if(j== n-1){
					ans= max(ans,max(c[0],c[1]));
				}
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}


