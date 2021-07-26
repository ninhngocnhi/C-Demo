#include <bits/stdc++.h>
using namespace std;
stack <int> st;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans[n];
	for(int i=n-1;i>=0;i--){
		while(st.size()>0 && st.top() <= a[i]){
			st.pop();
		}
		if(st.size()>0){
			ans[i]=st.top();
		}
		else{
			ans[i]=-1;
		}
		st.push(a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}


