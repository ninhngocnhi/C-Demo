#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int a[10]={0};
	for(int i=0;i<n;i++){
		a[s[i]-'0']++;
	}
	int dem=0,stpos,chst;
	for(int i=0;i<10;i++){
		if(dem+a[i]<k){
			dem+=a[i];
		}
		else{
			stpos=i;
			chst=k-dem;
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]-'0'<stpos){
			continue;
		}
		else if(s[i]-'0' == stpos && chst>0){
			chst--;
			continue;
		}
		else{
			cout<<s[i];
		}
	}
	return 0;
}


