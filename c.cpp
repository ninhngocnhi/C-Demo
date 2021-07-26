#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	s+=s[s.size()-1];
	string t="";
	for(int i=0;i<s.size()-1;i++){
		if(s[i]<=s[i+1]){
			cout<<0;
		}
		else{
			cout<<1;
		}
	}
	return 0;
}


