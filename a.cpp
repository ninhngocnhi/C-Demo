#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int ans1=0,ans2=0;
		int a1=a,b1=b,c1=c;
		if(2*a<=b){
			ans1+=a;
			b-=2*a;
			if(2*b<=c){
				ans1+= b;
			}
			else{
				ans1+=c/2;
			}
		}
		else{
			ans1+= b/2;
		}
		if(2*b1<=c1){
			ans2 +=b1;
		}
		else{
			ans2 += c1/2;
			b1 -=ans2;
			if(2*a1<=b1){
				ans2+= a1;
			}
			else{
				ans2+=b1/2;
			}
		}
		int ans= max(ans1,ans2)*3;
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

