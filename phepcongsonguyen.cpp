#include <bits/stdc++.h>
using namespace std;
FILE *f=fopen("SONGUYEN.INP","r");
void solve(char a[], char b[]){
	char c[600];
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
}
int main (){
	int t;
	fscanf(f,"%d",&t);
	char a[10],b[10];
	char x[500],y[500];
	for(int i=0;i<t;i++){
		fgets(a,10,f);
		fgets(x,500,f);
		x[strlen(x)-1]='\0';
		fgets(b,10,f);
		fgets(y,500,f);
		y[strlen(y)-1]='\0';
		solve(x,y);	
	}
	return 0;
}


