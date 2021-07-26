#include <iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long n;
		int a,b;
		cin>>n>>a>>b;
		long long sum;
		if((float)a <= (float)b/2){
			sum= a*n;
		}
		else{
			if(n%2==0){
				sum=b*n/2;
			}
			else{
				sum= b*(n/2) +a;
			}
		}
		cout<<sum<<endl;
	}	
	return 0;
}

