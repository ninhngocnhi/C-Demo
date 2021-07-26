#include <bits/stdc++.h>
using namespace std;
int prime(long long n){
	if(-1<n && n<2){
			return 0;
		} 
	else if(n==2){
		return 1;
	}
	else if(n>2){
		int A=1;
		for(int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				A=0;
				break;
			}	
		}
		return A;
	}
}
int dein(long long n){
	int t=0,g=0;
	stringstream ss;
	ss<<n;
	string s;
	ss>>s;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]<s[i+1]){
			t++;
		}
		else if(s[i]>s[i+1]){
			g++;
		}
	}
	if(t== s.size()-1 || g== s.size()-1){
		return 1;
	}
	else{
		return 0;
	}
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long ans=0;
		long long min=1,max;
		for(int i=0;i<n-1;i++){
			min=min*10;
		}
		max=min*10;
		for(long long i=min;i<max;i++){
			if(dein(i)==1){
				int k=i;
				if(prime(i)==1){
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


