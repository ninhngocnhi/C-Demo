//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main ()
//{
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i=1;i<=n;i++){
//		a[i]=i;
//	}
//	int d=0;
//	for(int i=n/2;i>=2;i--){
//		if(a[i]!=1){
//			if(a[i*2]!=1){
//				d++;
//				a[i*2]=1;
//				a[i]=1;
//			}
//			else {
//				for(int j=n;j>=2;j--){
//					if(__gcd(a[j],a[i])>1 && a[j]!=i){
//						d++;
//						a[j]=1;
//						a[i]=1;
//						break;
//					}
//				}
//			}
//		}
//	}
//	if(d==0) cout<<"Yeu Ha Noi";
//	else cout<<d;
//}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000006
int a[M];
int b[M];
int kt(int n){
	for(int i=1;i<=n;i++){
		a[i]=i;
		b[i]=0;
	}
}
void SNT(int n){
	for(int i =2;i<= n ; i++ ){
		if(b[i]==0){
			for(int j=i*i ; j <= n ; j+=i){
				if(b[j]==0) {
					b[j]=1;
				}
			}
		}
	} 
}	
int main ()
{
	int n;
	cin>>n;
	kt(n);
	SNT(n);
	int d=0;
	int s=0;
	for(int i=2;i<=n;i++){
		if(b[i]==0){
			if(i*i<=n){
				a[i]=1;
				a[i*i]=1;
				d++;
			}
			else if (i*2<=n && a[i]!=1 && a[i*2]!=1 ){
			a[i]=1;
			a[i*2]=1;
			d++;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(b[i]!=0 && a[i]!=1){
			if(a[i] %2==0 && a[i] %3 !=0){
				for(int j=i+1;j<=n;j++){
					if(a[j]%2==0 && a[j] %3!=0 ){
						a[i]=1;
						a[j]=1;
						d++;
						break;
					}
				}
			}
			else if(a[i]%2!=0 && a[i]%3 ==0){
				for(int j=i+1;j<=n;j++){
					if(a[j]%2!=0 && a[j] %3==0 ){
						a[i]=1;
						a[j]=1;
						d++;
						break;
						}
					}
				}
			}	
		}
	for(int i=2;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(__gcd(a[i],a[j])>1){
				a[i]=1;
				a[j]=1;
				d++;
				break;
			}
		}
	}
	if(d==0) cout<<"Yeu Ha Noi";
	else cout<<d;
}
