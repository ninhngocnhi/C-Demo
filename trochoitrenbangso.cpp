#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long A[n][n],ans=0; 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>A[i][j];
			}
		}
		for(int i=0;i<n;i++){
			ans+=A[i][i];
		}
		int a[n], stop=0;
	    for(int i=0;i<n;i++){
	    	a[i]=i;
		}
		while(stop==0){
			long long s=0;
			for(int i=0;i<n;i++){
				s+=A[a[i]][i];
			}
			ans=min(ans,s);
			int i=n-2;
		    while(i>=0 &&a[i]>a[i+1]){
		    	i--;
			} 
		    if(i<0) stop=1;
		    else
		    {
		        int k=n-1;
		        while(a[k]<a[i]) k--;
		        swap(a[k],a[i]); 
		        int e=n-1,b=i+1;
		        while(e>b)
		        {
		            swap(a[e],a[b]);
		            b++;e--;
		        }
		    }
		}
		cout<<ans<<endl;
	}
	return 0;
}


