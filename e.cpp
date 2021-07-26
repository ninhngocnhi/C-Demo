//#include <iostream>
//#include <math.h>
//using namespace std;
//int main (){
//	long long h;
//	int n;
//	cin>>h>>n;
//	long long check=0,k=h,s1=0,s2=0,dem=0;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		if(a[i]<0){
//			s1+=a[i];
//		}
//		else{
//			s2+=a[i];
//		}
//	}
//	for(int i=0;i<n;i++){
//		k+=a[i];
//		if(k<=0){
//			check=1;
//			break;
//		}
//	}
//	if(check==0 && s1+s2>=0){
//		cout<<"-1";
//	}
//	else if(s1+s2 < 0){
////		while(h>0){
////			for(int i=0;i<n;i++){
////				h+=a[i];
////				dem++;
////				if(h<=0){
////					break;
////				}
////			}
////		}
//		int k=h/(-sum);
//		dem=k*n;
//		h+=k*sum;
//		for(int i=0;i<n;i++){
//			h+=a[i];
//			dem++;
//			if(h<=0){
//				break;
//			}
//		}
//		cout<<dem;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pr;
const int maxn=2e5+10;
ll a[maxn],sum[maxn];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll hp,n;
  cin>>hp>>n;
  ll minx=1e18;
  for(ll i=1;i<=n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    minx=min(sum[i],minx);
  }
  if(sum[n]>=0&&-minx<hp){
    printf("-1\n");
    return 0;
  }
  ll ans=0;
  if(hp>-minx){
    if((hp+minx)%(-sum[n])!=0) ans+=(hp+minx)/(-sum[n])+1;
    else ans+=(hp+minx)/(-sum[n]);
    //printf("ans %lld %lld %lld\n",ans,-sum[n],hp+minx);
    hp+=sum[n]*(ans);
    ans=(ans)*n;
  }
  //cout<<ans<<" "<<hp<<endl;

  for(ll i=1;i<=n;i++){
    hp+=a[i];
    ans++;
    if(hp<=0){
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
