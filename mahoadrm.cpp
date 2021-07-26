#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		string s,s1,s2; 
		cin>>s; 
		long long sum = 0,sum1=0; 
		for(long long i = 0;i<(s.size())/2;i++){ 
			s1+=s[i]; 
			sum+=s[i]-65; 
		} 
		for(long long i = (s.size())/2;i<s.size();i++){	
			s2+=s[i]; 
			sum1+=s[i]-65; 
		} 
		for(long long i = 0;i<s1.size();i++){ 
			s1[i] = ((s1[i]-65+sum)%26)+65; 
		} 
		for(long long i = 0;i<s2.size();i++){ 
			s2[i] = ((s2[i]-65+sum1)%26)+65; 
		} 
		for(long long i = 0;i<s1.size();i++){ 
			s1[i] = ((s1[i]-65+(s2[i]-65))%26)+65; 
		} 
		cout<<s1<<endl; 
	}
	return 0;
} 
