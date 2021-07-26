#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
const double pi=2*acos(0);
 
void Upper(char &s){
	if (s>='a' && s<='z') s=s-'a'+'A';
}
void Lower(char &s){
	if (s>='A' && s<='Z') s=s-'A'+'a';
}
 
void move(string &s){
	char c=s[0];
	for(int i=0;i<s.length()-1;i++){
		if (s[i]!=' ' && s[i+1]!=' ') s[i]=s[i+1];
		if (s[i]!=' ' && s[i+1]==' ') s[i]=s[i+2];
	}
	s[s.length()-1]=c;
	string ee="ee";
	s+=ee;
;}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int T;
	cin>>T;
	cin.ignore();
	while(T--){
		string s;
		getline(cin,s);
		Lower(s[0]);
		move(s);
		Upper(s[0]);
		cout<<s<<endl;
	}
return 0;
}
