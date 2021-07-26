#include<iostream>
#include<string>
using namespace std;
int main(){
	int T;
	cin>>T;
	for (int i=0;i<T;i++){
		string s;
		cin>>s;
		if (s=="0") cout<<"YES\n";
		else{
			int len=s.length();
			if (len==1) cout<<"NO\n";
			else{
				long long sum=0;
				for(int j=0;j<len;j++){
					sum+=s[j]-'0';
				}
				int x=(s[len-2]-'0')*10+(s[len-1]-'0');
				if (x%4==0 && sum%9==0) cout<<"YES\n";
				else cout<<"NO\n";
			}
		}
	}
return 0;
}
 
