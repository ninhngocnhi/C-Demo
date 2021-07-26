#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	int a1=0, a2=0,a3=0,a4=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1) a1++;
		else if (a[i]==2) a2++;
		else if(a[i]==3) a3++;
		else a4++;
	}
	int c1=0,c2=0;
	int sum =a4+a3+a2/2;
	if(a2%2 !=0) c2=2;
	if(a3<a1){
		c1= a1 -a3;
	}
	int s=c1+c2;
	if(s%4==0){
		sum=sum+s/4;
	}
	else{
		sum=sum +1 +s/4;
	}
	cout<<sum;
	return 0;
}

