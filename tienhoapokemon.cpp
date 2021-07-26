#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int tinh(int a, int b){
	int i = 1;
	while(a * i <= b){
		i++;
		b += 2;
	}
	return i - 1;
}
struct type{
	string s;
};
int main (){
	int n;
	cin>>n;
	type ds[100];
	long long sum=0,maxx=0,pos=0;
	for(int i=0;i<n;i++){
		cin>>ds[i].s;
		int k,m;
		cin>>k>>m;
		sum+=tinh(k,m);
		if(maxx<tinh(k,m)){
			maxx=tinh(k,m);
			pos=i;
		}
	}
	cout<<sum<<endl<<ds[pos].s;
	return 0;
}


