#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int h,c,k;
	cin>>h>>c>>k;
	long long sum=0;
	while(k--){
		sum+=h*2+(c-2)*2;
		h-=4;
		c-=4;
	}
	cout<<sum;
	return 0;
}

