#include <bits/stdc++.h>
using namespace std;
int n;
int a[100]={0};
void out(){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i== n-1){
			out();
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
    	Try(0);
    	cout<<endl;	
	}
}
//#include <iostream>
//using namespace std;
//int main (){
//	int n;
//	cin>>n;
//	int a[n]={0};
//	int stop=0;
//	while(stop==0){
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
//		int i=n-1;
//		while(i>=0 && a[i]==1){
//			a[i]=0;
//			i--;
//		}
//		if(i==-1){
//			stop=1;
//		}
//		else{
//			a[i]=1;
//		}
//	}
//	return 0;
//}
//  
