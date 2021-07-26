#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	long long ans=0;
	s+='0';
	for(int i=0;i<s.size()-1;i++){
		if(s[i]=='C'){
			ans+=12;
		}
		else if(s[i]=='O'){
			if('2'<=s[i+1] && s[i+1]<='9'){
				ans+= 16*(s[i+1]-'0');
				i++;
			}
			else{
				ans+=16;
			}
		}
		else if(s[i]=='H'){
			if('2'<=s[i+1] && s[i+1]<='9'){
				ans+= (s[i+1]-'0');
				i++;
			}
			else{
				ans+=1;
			}
		}
		else if(s[i]=='('){
			long long sum=0;
			for(int j=i+1;j<s.size();j++){
				if(s[j]==')'){
					if('2'<=s[j+1] && s[j+1]<='9'){
						sum*= (s[j+1]-'0');
						i=j+1;
					}
					else{
						i=j;
					}
					ans+=sum;
					break;
				}
				else{
					if(s[j]=='C'){
						sum+=12;
					}
					else if(s[j]=='O'){
						if('2'<=s[j+1] && s[j+1]<='9'){
							sum+= 16*(s[j+1]-'0');
							j++;
						}
						else{
							sum+=16;
						}
					}
					else if(s[j]=='H'){
						if('2'<=s[j+1] && s[j+1]<='9'){
							sum+= (s[j+1]-'0');
							j++;
						}
						else{
							sum+=1;
						}
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}


