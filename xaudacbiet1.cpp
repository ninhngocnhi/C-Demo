#include<iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	char s[n];
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	int check=1,k,h;
	cin>>k>>h;
	for(int i=k;i<=h-1;i++){
		for(int j=i+1;j<=h;j++){
			if(s[j]==s[i]){
				check=0;
				break;
			}
		}
		if(check == 0){
			break;
		}
	}
	if(check ==1) printf ("1");
	else printf ("0") ;
//	long long sum=n;;
//	for(int i=0;i<n-1;i++){
//		if(s[i] == s[i+1]){
//			s[i]='0';
//		}
//	}
//	for(int i=0;i<n;i++){
//		if(s[i] != '0'){
//			for(int j=i+1;j<n;j++){
//				if(s[j] != '0'){
//					sum++;
//				}
//				else{
//					sum++;
//					break;
//				}
//			}
//		}
//	}
//	cout <<sum;
	return 0;
}
