#include <bits/stdc++.h>
using namespace std;
 
int main (){
	string s;
	cin>>s;
	int n=s.length();
	int ans=0;
	int a[n]={0};
	int k=0;
	for(int i=0;i<n;i++){
		int dem=1;
		if(s[i] != '0'){
			for(int j=i+1;j<n;j++){
				if(s[j]==s[i]){
					dem++;
					s[j]='0';
				}
			}
			a[k]=dem;
			k++;
		}
	}
	int X=k;
	sort(a,a+X);
	for(int k=0;k<X-2;k++){
		ans+=a[k];
	}
	cout<<ans;
	return 0;
}
