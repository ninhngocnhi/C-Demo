#include <bits/stdc++.h>
using namespace std;
int main (){
	string a,b;
	cin>>a>>b;
	int a1[26]={0},b1[26]={0};
	for(int i=0;i<a.size();i++){
		a1[a[i]-'a']++;
	}
	for(int i=0;i<b.size();i++){
		b1[b[i]-'a']++;
	}
	int ans=0;
	for(int i=0;i<26;i++){
		ans+= abs(a1[i]-b1[i]);
	}
	cout<<ans;
	return 0;
}


