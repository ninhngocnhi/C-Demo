#include<iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		char a[len]={0};
		int b[len]={0};
		int k=0;
		for(int i=0;i<len;i++){
			int dem=1;
			for(int j=i+1;j<len;j++){
				if(s[j]==s[i]){
					dem++;
					i=j;
				}
				else{
					break;
				}
			}
			a[k]=s[i];
			b[k]=dem;
			k++;
		}
		for(int i=0;i<k;i++){
		cout<<b[i]<<a[i];
		}
		cout<<endl;
	}
	return 0;
}

