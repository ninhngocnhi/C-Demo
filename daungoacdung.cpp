#include <bits/stdc++.h>
using namespace std;
int main (){
	while(1){
		string s;
		getline(cin,s);
		if(s=="."){
			break;
		}
		else{
			int check=1;
			stack <char> st;
			for(int i=0;i<s.size();i++){
				if(s[i]=='(' || s[i]=='['){
					st.push(s[i]);
				}
				else if(s[i]==')'){
					if(st.size()==0 || (st.size()!=0 && st.top() !='(')){
						check=0;
					}
					else if(st.size()!=0 && st.top() =='('){
						st.pop();
					}
				}
				else if(s[i]==']'){
					if(st.size()==0 || (st.size()!=0 && st.top() !='[')){
						check=0;
					}
					else if(st.size()!=0 && st.top() =='['){
						st.pop();
					}
				}
				if(check==0){
					break;
				}
			}
			if(check==1&& st.size()==0){
				cout<<"yes"<<endl;
			}
			else{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}


