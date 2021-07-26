//#include <bits/stdc++.h>
//using namespace std;
//int main (){
//	int t;
//	cin>>t;
//	while(t--){
//		int n,k;
//		cin>>n>>k;
//		int a[n+5],f[10200]; 
//		for(int i=1;i<=n;i++){
//			cin>>a[i];
//		}
//		f[0]=1;
//		for(int i=1; i<=n; i++){
//			for(int j=k; j>=a[i]; j--){
//				if(f[j-a[i]]==1) f[j]=1;
//			}
//		}
//		if(f[k]==1) cout << "YES"<<endl;
//		else cout << "NO"<<endl;
//	}
//	return 0;
//}
//
#include <iostream>
#include <vector>
using namespace std;
int main() { 	
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> A,C;
		A.resize(n+1), C.resize(k+1);	
		for (int i=1; i<=n; i++) {
			cin>>A[i];
		}
		C[0]=1;
	    for(int i=1;i<=n;i++){
	    	C[i]=0;
	    }
		for(int i=1;i<=n;i++) {
		    for(int j=k;j>=A[i];j--) {
				if(!C[j] && C[j-A[i]]) {
					C[j]=1;
				}
			} 	
		}	
		if(C[k])
	    	cout<<"YES"<<endl;
		else
	    	cout<<"NO"<<endl;
	}
    return 0;
}
