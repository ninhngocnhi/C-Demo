#include <bits/stdc++.h>
using namespace std;
int n;
int a[100];
bool b[100];
void in(){
	for(int i=1;i<=n;i++){
		b[i]= true;
	}
}
void out(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(b[j]){
			a[i]=j;
			b[j]=false;
			if(i==n){
				out();
			}
			else{
				Try(i+1);
			}
			b[j]=true;
		}
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	cin>>n;
	    in();
	    Try(1);
	    cout<<endl;
	}
}
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//    	a[i]=i+1;
//	}
//	int stop=0;
//	while(stop==0){
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
//		int i=n-2;
//		while(i>=0 && a[i]>a[i+1]){
//			i--;
//		}
//		if(i==-1){
//			stop=1;
//		}
//		else{
//			int k=n-1;
//			while(a[k]<a[i]){
//				k--;
//			}
//			swap(a[k],a[i]);
//			int x=n-1,y=i+1;
//			while(x>y){
//				swap(a[x],a[y]);
//				x--;
//				y++;
//			}
//		}
//	}
//}
