#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x=s[s.size()-1]-'0';
		if( s.size()>1 ){
			x+=(s[s.size()-2]-'0')*10;
		}
		int sum=1;
		if(x%2 != 0){
			sum +=4;
		}
		else{
			sum +=1;
		}
		if(x%4==0){
			sum +=2;
		}
		else if(x%4==2){
			sum +=3;
		}
		cout<<sum %5<<endl;
	}
	return 0;
}


