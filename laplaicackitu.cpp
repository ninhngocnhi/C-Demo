#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	long long sum=0;
	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]=='C' && ('2'<= s[i+1]<='9')){
			sum+=12* (int)s[i+1];
			i++;
		}
		else if(s[i]=='C' && (s[i+1]>'9')){
			sum+=12;
		}
		if(s[i]=='O' && ('2'<= s[i+1]<='9')){
			sum+=16* (int)s[i+1];
			i++;
		}
		else if(s[i]=='O' && (s[i+1]>'9')){
			sum+=12;
		}
		if(s[i]=='H' && ('2'<= s[i+1]<='9')){
			sum+= (int)s[i+1];
			i++;
		}
		else if(s[i]=='H' && (s[i+1]>'9')){
			sum+=1;
		}
		else if(s[i]=='('){
			int sum1=0,check=i;
			for(int j=i+1;j<len;j++){
				if(s[j]=='C' && ('2'<= s[j+1]<='9')){
					sum1 +=12* (int)s[j+1];
					j++;
				}
				else if(s[i]=='C' && (s[i+1]>'9')){
					sum1 +=12;
				}
				if(s[i]=='O' && ('2'<= s[i+1]<='9')){
					sum1 +=16* (int)s[i+1];
					j++;
				}
				else if(s[i]=='O' && (s[i+1]>'9')){
					sum1 +=12;
				}
				if(s[i]=='H' && ('2'<= s[i+1]<='9')){
					sum1 += (int)s[i+1];
					j++;
				}
				else if(s[i]=='H' && (s[i+1]>'9')){
					sum1 +=1;
				}
				else if(s[j]==')'){
					sum1 *= (int) s[j+1];
					check=j+1;
				}
			}
			sum+=sum1;
			i=check;
		}
	}
	cout<<sum;
	return 0;
}


