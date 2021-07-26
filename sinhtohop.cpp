#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
void out(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			out();
		}
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}
	return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//int main (){
//	int n,k;
//	cin>>n>>k;
//	int a[k];
//	for(int i=0;i<k;i++){
//		a[i]=i+1;
//	}
//	while(1){
//		for(int i=0;i<k;i++){
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
//		int i=k-1;
//		while(a[i] == n-k+i+1 ) i--;
//		if(i<0) break;
//		else{
//			a[i]++;
//			for(int j=i+1;j<k;j++){
//				a[j]=a[j-1]+1;
//			}
//		}
//	}
//}
//Code by Ninh Ngoc

