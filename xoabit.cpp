#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	int check=0,pos;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			check=1;
			pos=i;
			break;
		}
	}
	if(check==0){
		for(int i=0;i<s.size()-1;i++){
			cout<<"1";
		}
	}
	else{
		for(int i=0;i<pos;i++){
			cout<<s[i];
		}
		for(int i=pos+1;i<s.size();i++){
			cout<<s[i];
		}
	}
	return 0;
}


