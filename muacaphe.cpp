//#include <bits/stdc++.h>
//using namespace std;
//int main (){
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	int q;
//	cin>>q;
//	int b[q],x=0,y=q;
//	while(q--){
//		int k;
//		cin>>k;
//		int l=0,r=n-1,ans;
//		while(l<r){
//			int tb=(l+r)/2;
//			if(a[tb]<k){
//				l=tb+1;
//			}
//			else{
//				r=tb;
//			}
//			ans=r;
//		}
//		if(a[ans]<=k){
//			int dem=0;
//			for(int i=ans+1;i<n;i++){
//				if(a[i]==a[ans]){
//					dem++;
//				}
//				else{
//					break;
//				}
//			}
//			b[x]=ans+dem+1;
//			x++;
////			cout<<ans+dem+1<<endl;
//		}
//		else{
//			b[x]=ans;
//			x++;
////			cout<<ans<<endl;
//		}
//	}
//	for(int i=0;i<y;i++){
//		cout<<b[i]<<endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
void init(int a[],int n){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
int bs(int l,int r,int a[],int x,int n){
	int mid;
	while(l<=r){
		mid=(r+l)/2;
		if(a[mid]==x){
			int index=mid;
			for(int i=mid;i<=n;i++){
				if(a[i]==x) index=i;
				else break;
			}
			return index;
		}
		else if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
	return l;
}
void solve (){
	int n,q;
	cin>>n;
	int a[n+5];
	init(a,n);
	sort(a+1,a+n+1);
	cin>>q;
	int b[q+5];
	init(b,q);
	for(int i=1;i<=q;i++){
		int x=bs(1,n,a,b[i],n);
		if(a[x]==b[i]) cout<<x<<endl;
		else if(a[x]<b[i]) cout<<x+1<<endl;
		else cout<<x-1<<endl;
	}
}
int main ()
{
	int t=1;
	while(t--){
		solve();
	}
 
 return 0;
}
