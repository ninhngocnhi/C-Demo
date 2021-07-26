#include <bits/stdc++.h>
using namespace std;
string s;
vector <char> first,last;
int a[2000][2000]={0};
void Try(int i,int j){
	if(i==j){
		first.push_back(s[i]);
		return ;
	}
	if(i>j) return;
	if(s[i]==s[j]){
		first.push_back(s[i]);
		last.push_back(s[j]);
		Try(i+1,j-1);
		return;
	}
	if(a[i+1][j]>a[i][j-1]) Try(i+1,j);
	else Try(i,j-1);
}
int main (){
	cin>>s;
	int n=s.size();
	for(int j=0;j<n;j++){
		for(int i=j;i>=0;i--){
			if(i==j){
				a[i][j]=1;
			}
			else{
				if(s[i]==s[j]){
					a[i][j]=a[i+1][j-1]+2;
				}
				else{
					a[i][j]=max(a[i+1][j],a[i][j-1]);
				}
			}
		}
	}
	Try(0,n-1);
	for(int i=0;i<first.size();i++){
		cout<<first[i];
	}
	for(int i=last.size()-1;i>=0;i--){
		cout<<last[i];
	}
	return 0;
}


