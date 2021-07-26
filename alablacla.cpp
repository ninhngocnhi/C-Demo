#include <iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		char a[n];
		for( int i=1;i<=n;i++){
			cin>>a[i];
		}
		char b[n];
		for( int i=1;i<=n;i++){
			cin>>b[i];
		}
		int s=1;
		for( int i=1;i<=n;i++){
			if(a[i]=='1' && b[i]=='1'){
				s*=2;
				s = s % 1000000007;
			}
			else if(a[i]=='1' && b[i]=='0' ){
				s=0;
				break;
			}	
		}
		if(s==0){
			cout<<"Nope"<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}	
	return 0;
}

