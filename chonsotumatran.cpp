#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int A[n][n];
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cin>>A[i][j];
		}
	}
    int a[n], stop=0;
    for(int i=0;i<n;i++){
    	a[i]=i;
	}
	while(stop==0){
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=A[i][a[i]];
		}
		if(sum==k){
			for(int i=0;i<n;i++){
				cout<<a[i]+1<<" ";
			}
			cout << endl;
		}
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
}
