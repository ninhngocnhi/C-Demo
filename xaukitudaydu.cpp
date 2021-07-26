#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main(){
	string s2;
	char s1[]="abcdefghijklmnopqrstuvwxyz";
	cin >> s2;
	int l1=26, l2=s2.length();
	for(int i=0; i<l1; i++){
		a[i][0]=0;
	}
	for(int i=0; i<l2; i++){
		a[0][i]=0;
	}
	for(int i=0; i<l1; i++){
		for(int j=0; j<l2; j++){
			if(s1[i]==s2[j]){
				a[i+1][j+1]=a[i][j]+1;
			}
			else{
				a[i+1][j+1]=max(a[i+1][j], a[i][j+1]);
			}
		}
	}
//	cout<<"  ";
//	for(int i=0;i<l2;i++){
//		cout<<s2[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=1; i<=l1; i++){
//		cout<<s1[i-1]<<" ";
//		for(int j=1; j<=l2; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
	cout << 26-a[l1][l2];
	return 0;
} 
