#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k];
		int b[k];
		for(int i=0;i<k;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		int ans=0;
		int i=k-1;
		while(a[i]==n-k+i+1){
			i--;
		}
		if(i>-1){
			b[i]++;
			for(int j=i+1;j<k;j++){
				b[j]=b[j-1]+1;
			}
			for(int i=0;i<k;i++){
				int check=0;
				for(int j=0;j<k;j++){
					if(b[i]== a[j]){
						check=1;
						break;
					}
				}
				if(check==0){
					ans++;
				}
			}
		}
		else{
			ans=k;
		}
		cout<<ans<<endl;
	}
	return 0;
}


