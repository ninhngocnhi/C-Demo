#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size()-1;i++){
			int dem=1,j=1;
			while(i-j>=0 && i+j<s.size()){
				if(s[i-j]==s[i+j]){
					dem +=2;
					j++;
				}
				else{
					break;
				}
			}
			ans=max(ans,dem);
			if(s[i]== s[i+1]){
				int dem1=2,j1=1;
				while(i-j1 >=0 && i+1+j1<s.size()){
					if(s[i-j1]==s[i+j1+1]){
						dem1 +=2;
						j1++;
					}
					else{
						break;
					}
				}
				ans=max(ans,dem1);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


