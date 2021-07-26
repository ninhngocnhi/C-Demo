#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	int k,b,m;
	cin>>k>>b>>m;
	unsigned long long base=1,ans=0;
	unsigned long long x=0;
	for(int i=k-1;i>=0;i++){
		x= (x*b+s[i]-'0')%m;
		base=(base*b)%m;
	}
	ans+=x;
	for(int i=1;i<s.size()-k+1;i++){
		x=(x- (s[i-1]-'0')*base + 10*m)%m;
		x*=b;
		x+= (s[i+k-1]-'0');
		x%=m;
		ans+=x;
	}
	cout<<ans;
	return 0;
}
