#include <bits/stdc++.h>
using namespace std;
stack<int> st;
int main (){
	char a[1000];
	gets(a);
	int d=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='('){
			d++;
			cout<<d<<" ";
			st.push(d);
		}
		else if(a[i]==')'){
			cout<<st.top()<<" ";
			st.pop();
		}
	}
	return 0;
}

