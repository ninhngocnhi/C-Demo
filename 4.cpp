#include <bits/stdc++.h>
using namespace std;
string a[102];
bool compare(string x, string y){
	string xy =x+y;
	string yx= y+x;
	return (xy>yx);
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,compare);
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
