#include<iostream>
#include <math.h>
using namespace std;
int main (){
	int n,B;
	cin>>n>>B;
	string s;
	cin>>s;
	int a[n]={0};
	int k=1;
	for(int i=0;i<n;i++){
		int dem=1;
		for(int j=i+1;j<n;j++){
			if(s[j]==s[i]){
				dem++;
				i=j;
			}
			else{
				break;
			}
		}
		a[k]=dem;
		k++;
	}
	int X=k;
	a[0]=0;
	int maxx=0;
	for(int k=0;k<X;k++){
		int b=B;
		int sum=a[k];
		int step=k+1;
		while(b>0 && step<X ){
			if(a[step]<=b){
				sum+=a[step]+a[step+1];
				b-=a[step];
				step+=2;
			}
			else{
				sum+=b;
				b=0;
			}
		}
		maxx=max(maxx,sum);
	}
	cout<<maxx;
	return 0;
}

