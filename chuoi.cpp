#include <bits/stdc++.h>
using namespace std;
int main (){
	char a[100];
	char b[100];
	gets(a);
	gets(b);
	int v;
	cin>>v;
	int lena=strlen(a),lenb=strlen(b);
	for(int i=0;i<v-1;i++){
		cout<<a[i];
	}
	for(int i=0;i<lenb;i++){
		cout<<b[i];
	}
	for(int i=v-1;i<lena;i++){
		cout<<a[i];
	}
	return 0;
}


