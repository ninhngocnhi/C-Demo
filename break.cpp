#include <bits/stdc++.h>
using namespace std;
int main (){
	int a,s=0,d=0;
	while(true){
		scanf("%d",&a);
		if(a>=0){
			s+=a;
			d++;
		}
		else{
			break;
		}
	}
	cout<<(float)s/(float)d;
	return 0;
}


