#include <bits/stdc++.h>
using namespace std;
int main (){
	int a,b,c;
	cin>>a>>b>>c;
	int ans=max(c-b,b-a)-1;
	cout<<ans;
	return 0;
}


