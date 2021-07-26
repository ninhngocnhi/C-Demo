#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int check=0;
		for(int i=0;i<s.size();i++){
			int x=s[i]-'0';
			if(i%2==0){
				if(x%2 ==0){
					check=1;
					break;
				}
			}
			else{
				if(x%2 !=0){
					check=1;
					break;
				}
			}
		}
		if(check==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


