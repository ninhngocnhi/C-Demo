#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<n;i++){
		if(s1[i]==s2[i] && s1[i]=='K'){
			cout<<'B';
		}
		else if(s1[i]==s2[i] && s1[i]=='B'){
			cout<<'G';
		}
		else if(s1[i]==s2[i] && s1[i]=='G'){
			cout<<'K';
		}
		else if((s1[i]=='K' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='K')){
			cout<<'B';
		}
		else if((s1[i]=='K' && s2[i]=='G') || (s1[i]=='G' && s2[i]=='K')){
			cout<<'K';
		}
		else if((s1[i]=='B' && s2[i]=='G') || (s1[i]=='G' && s2[i]=='B')){
			cout<<'G';
		}
	}
	return 0;
}


