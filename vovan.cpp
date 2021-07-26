#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
// Phep toans 1 ngoi la chi can 1 gia tri de tinh vd: !,sin,cos
// Phep toans 2 ngoi la chi can 2 gia tri de tinh vd: tohop, chinh hop,...
//	(a+b*c)=> abc*+
//	
//	(a+b*c)/(d-(e-x))=> abc*+dex--/
//	()()(())
//	abc*+dex--/
//	
//	(a*d+b/c)%(d-(e!-x)!)=> ad*bc/+de!x-!-%
//	()(%)(-(-))
//	ad*bc/+de!x-!-%

//da co dang balan / Polish / phep toan sau
//Tinh tri
//Duyet tung ki tu s[i]
//
//const int MN = 200;

bool Anpha(char c){
	return (c>='a' && c<='z');
}

int Val(char c){
	return c-'a';
}

int Factorial(int n){
	int r =1;
	for (int i=2;i<=n;i++){
		r*=i
	}
	return r;
}

int st[MN]; //stack
int tsi;   // top of st

int compute(string s){
	int len = s,length();
	cout << "\ninput: "<<s<<" len= "<<len;
	ts=0
	for (int i=0; i<len;i++){
		if (Anpha(s[i])){
			ts++;
			st[ts]= Val(s[i]);
			continue;
		}
		switch(s[i]){
			case '+': st[ts-1]+=st[ts];
				st--;
				break;
			case '-': st[ts-1]-=st[ts];
				st--;
				break;
			case '*': st[ts-1]*=st[ts];
				st--;
				break;
			case '/': st[ts-1]/=st[ts];
				st--;
				break;
			case '%': st[ts-1]%=st[ts];
				st--;
				break;
			case '!': Faactorial(st[ts]);
				break;	
		}
	}
	return st[ts];
}

void AllVal(){
	for(char c='a';c<='z';c++){
		cout << "\n " <<c<< ": " << Val(c);
	}
}
int main(){
	// h+c*z
	//cout << "\n" << compute("hcz*+");
	for (char c='a';c<='z';c++)
	return 0;
}


