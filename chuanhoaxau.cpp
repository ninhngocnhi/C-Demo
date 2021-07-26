#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	int len=s.size();
	int h=0,t=0;
	for(int i=0;i<len;i++){
		if('A'<= s[i] && s[i]<= 'Z'){
			h++;
		}
		else{
			t++;
		}
	}
	if(t>=h){
		for(int i=0;i<len;i++){
			if('A'<= s[i] && s[i]<= 'Z'){
				s[i] += 32;
			}
			cout<<s[i];
		}
	}
	else{
		for(int i=0;i<len;i++){
			if('a'<= s[i] && s[i]<= 'z'){
				s[i] -= 32;
			}
			cout<<s[i];
		}
	}
	return 0;
}


