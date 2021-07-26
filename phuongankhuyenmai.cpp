#include <bits/stdc++.h>
using namespace std;
int main (){
	int ans=0;
	for(int i=10000;i<=999999;i++){
		int t=i,s=0,s1=0,check=0;
		while(t>0){
			int x=t%10;
			s1+=x;
			s=s*10+x;
			t/=10;
		}
		if(s==i && s1%10==0) ans++;
	}
	cout<<ans;
	return 0;
}


