#include <bits/stdc++.h>
using namespace std;
bool toan(char x){
	if(x=='+' || x=='-'|| x=='*'|| x=='/') return true;
	else return false;
}
stack <string> st;
int main (){
	char a[1000];
	gets(a);
	for(int i=strlen(a)-1;i>=0;i--){
		if(toan(a[i])){
			string s1=st.top();st.pop();
			string s2=st.top();st.pop();
			string s="(" + s1 + a[i] + s2 + ")";
			st.push(s);
		}
		else{
			st.push(string(1,a[i]));
		}
	}
	cout<<st.top();
	return 0;
}


