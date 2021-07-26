#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int len=s.size();
		if(s[len-1]=='6' && s[len-2]=='8'){
			cout<<'1'<<endl;
		}
		else{
			cout<<'0'<<endl;
		}
	}
	return 0;
}


