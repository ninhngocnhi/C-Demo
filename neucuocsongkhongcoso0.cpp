#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main (){
	string a,b;
	cin>>a>>b;
	long long a1=0,b1=0,sa=0,sb=0;
	int la=a.size()-1, lb=b.size()-1;
	for(int i=0;i<a.size();i++){
		int t=a[i]-'0';
		sa+= t*pow(10,la);
		la--;
		if(t!=0){
			a1=a1*10+t;
		}
	}
	for(int i=0;i<b.size();i++){
		int t=b[i]-'0';
		sb+= t*pow(10,lb);
		lb--;
		if(t!=0){
			b1=b1*10+t;
		}
	}
	long long s= sa+sb, s1=0,dem=0;;
	while(s>0){
		int t=s%10;
		if(t!=0){
			s1+= t*pow(10,dem);
			dem++;
		}
		s/=10;
	}
	if(a1+ b1 == s1){
		cout<<"YES";
	}
	else{
		cout<< "NO";
	}
	return 0;
}


