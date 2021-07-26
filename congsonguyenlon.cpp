#include <bits/stdc++.h>
#define N 10000
using namespace std;
int main (){
	char a[N],b[N],c[N];
	gets(a);
	fflush(stdin);
	gets(b);
	int len1= strlen(a),len2=strlen(b);
	strrev(a),strrev(b);
	if(len1>len2){
		for(int i=len2;i<len1;i++){
			b[i]='0';
		}
		a[len1]='0';
		b[len1]='0';
	}
	else if(len1<len2){
		for(int i=len1;i<len2;i++){
			a[i]='0';
		}
		a[len2]='0';
		b[len2]='0';
	}
	else{
		a[len2]='0';
		b[len2]='0';
	}
	int maxx=max(len1,len2),check=0;
	for(int i=0;i<maxx+1;i++){
		int k= (a[i]-'0')+(b[i]-'0')+check;
		int ans=k%10;
		check=k/10;
		c[i]=ans+'0';
	}
	if(c[maxx]=='0'){
		for(int i=maxx-1;i>=0;i--){
			cout<<c[i];
		}
	}
	else{
		for(int i=maxx;i>=0;i--){
			cout<<c[i];
		}
	}
	return 0;
}


