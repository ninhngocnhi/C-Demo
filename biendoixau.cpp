#include <bits/stdc++.h>
using namespace std;
#define M 1000000007 
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long ans=0,sum=0;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='b'){
				sum++;
				sum%=M;
			}
			else{
				ans+=sum;
				ans%=M;
				sum *=2;
				sum%=M;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


