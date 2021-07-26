#include <bits/stdc++.h>
using namespace std;
bool toan(char x){
	if(x=='(' || x==')') return 0;
	else if(x=='+' || x== '-')return 1;
	else if(x=='*'|| x=='/' || x=='%') return 2;
	else return 4;
}
stack <string> st;
int main (){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if('a'<=s[i] && s[i] <='z'){
			cout<<s[i];
		}
		else{
			if(st.size() ==0){
				st.push(s[i]);	
			}
			else{
				if(toan(st.top())<toan(s[i]))
			}
		}
	}
	cout<<st.top();
	return 0;
}


