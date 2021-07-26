#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	unsigned long long a=1,sum=0;
	int len=s.size();
	int b[len],u=0;
	for(int i=len-1;i>=0;i--){
		sum += (s[i]-'0') *a;
		a*=2;
	}
	while(sum>0){
		b[u]=sum%8;
		u++;
		sum/=8;
	}
	for(int j=u-1;j>=0;j--){
		cout<<b[j];
	}
	return 0;
}


