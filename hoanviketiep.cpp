#include<iostream>
#include<cstring>
using namespace std;
int n, a[80];
void Result(){
	for(int i=0; i<n; i++){
		cout << a[i];
	}
}
bool sinhHoanVi(){
	int i=n-2;
	while(i>0 && a[i]>=a[i+1]){
		i--;
	}
	if(i>0){
		int k=n-1;
		while(a[i] >= a[k]){
			k--;
		}
		int t=a[i]; a[i]=a[k]; a[k]=t;
		int r=i+1, s=n-1;
		while(r<=s){
			t=a[r]; a[r]=a[s]; a[s]=t;
			r++; s--;
		}
		return true;
	}
	return false;
}
void Test(){
	string s;
	cin >> s;
	n=s.length();
	for(int i=0; i<n; i++){
		a[i] = s[i]-'0'; // doi xau thanh so
	}
	if(sinhHoanVi()){
		Result();
	}
	else{
		cout << "BIGGEST";
	}
}
main(){
	int t, stt;
	cin >> t;
	while(t--){
		cin >> stt;
		cout << stt << " ";
		Test();
		cout << endl;
	}
	return 0;
}
