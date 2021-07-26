#include <bits/stdc++.h>
using namespace std;
//struct doi{
//	string s;
//	long long sol=0;
//	long long poi=0;
//};
int main (){
	int n;
	cin>>n;
	string s;
	int a[8];
	long long sol=0,poi=0;
	cin>>s;
	for(int i=0;i<8;i++){
		cin>>a[i];
	}
	for(int i=1;i<8;i+=2){
		if(a[i]>0){
			sol++;
			poi+=a[i]+(a[i-1]-1)*20;
		}
	}
	for(int i=1;i<n;i++){
		string s1;
		int b[8];
		long long solve=0,point=0;
		cin>>s1;
		for(int i=0;i<8;i++){
			cin>>b[i];
		}
		for(int i=1;i<8;i+=2){
			if(b[i]>0){
				solve++;
				point +=b[i]+(b[i-1]-1)*20;
			}
		}
		if(solve>sol){
			s=s1;
			sol=solve;
			poi=point;
		}
		else if(solve==sol){
			if(point<poi){
				s=s1;
				sol=solve;
				poi=point;
			}
		}
	}
	cout<<s<<" "<<sol<<" "<<poi;
	return 0;
}


