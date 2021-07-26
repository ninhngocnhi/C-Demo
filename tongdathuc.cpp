#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define N 100005
using namespace std;
int main (){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char A[N];
		gets(A);
		int len1 = strlen(A);
		char B[N];
		gets(B);
		int len2 = strlen(B); 
		int a[N]={0},b[N]={0},x=0,maxx=0,minn=N;
		for(int i=1;i<len1;i++){
			if(A[i-1]=='^'){
				int s1=0;
				for(int j=i;j<len1;j++){
					if('0'<=A[j] && A[j]<='9'){
						s1= s1*10 + (A[j]-'0');
					}
					else{
						break;
					}
				}
				maxx=max(s1,maxx);
				minn=min(s1,minn);
				a[s1]=1;
				int s=0,z=0;
				for(int j=i-4;j>=0;j--){
					if('0'<=A[j] && A[j]<='9'){
						s+=(A[j]-'0')*pow(10,z);
						z++;
					}
					else{
						break;
					}
				}
				b[s1]+=s;
			}
		}
		for(int i=1;i<len2;i++){
			if(B[i-1]=='^'){
				int s1=0;
				for(int j=i;j<len2;j++){
					if('0'<=B[j] && B[j]<='9'){
						s1= s1*10 + (B[j]-'0');
					}
					else{
						break;
					}
				}
				maxx=max(s1,maxx);
				minn=min(s1,minn);
				a[s1]=1;
				int s=0,z=0;
				for(int j=i-4;j>=0;j--){
					if('0'<=B[j] && B[j]<='9'){
						s+=(B[j]-'0')*pow(10,z);
						z++;
					}
					else{
						break;
					}
				}
				b[s1]+=s;
			}
		}
		for(int i=maxx;i>=minn;i--){
			if(a[i]==1){
				printf("%d",b[i]);
				printf("*x^");
				printf("%d",i);
				if(i!=minn){
					printf(" + ");
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
//11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
//3*x^8 + 7*x^2 + 4*x^0
//11*x^126 + 9*x^5 + 2*x^1 + 3*x^0
//3*x^18 + 17*x^1 + 4*x^0

