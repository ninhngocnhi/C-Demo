#include<iostream>
#include <math.h>
#include <string.h>
using namespace std;
int check( char s[], int k, int h){
	int check=1;
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
	if(check ==1) return 1;
	else return 0;
}
int main (){
	int n;
	cin>>n;
	char s[n];
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	long long sum=n;
	for(int i=1;i<n;i++){//do dai chuoi
		for(int j=i+1;j<=n;j++){//duyet chuoi c
			if (check(s,i,j) == 1){
				sum++;
			}
			else{
				break;
			}
		}
	}
	cout <<sum;
	return 0;
}



