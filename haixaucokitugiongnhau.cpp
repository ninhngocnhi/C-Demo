#include <bits/stdc++.h>
using namespace std;
int main (){
	int t=1;
	while(1){
		string a,b;
		cin>>a>>b;
		if(a=="END" && b=="END"){
			break;
		}
		else{
			if(a.size() == b.size()){
				int a1[26]={0},b1[26]={0};
				int check=1;
				for(int i=0;i<a.size();i++){
					a1[a[i]-'a']++;
					b1[b[i]-'a']++;
				}
				for(int i=0;i<26;i++){
					if(a1[i] != b1[i]){
						check=0;
						break;
					}
				}
				if(check==0){
					cout<<"Case "<<t<<": different"<<endl;
					t++;
				}
				else{
					cout<<"Case "<<t<<": same"<<endl;
					t++;
				}
			}
			else{
				cout<<"Case "<<t<<": different"<<endl;
				t++;
			}
		}
	}
	return 0;
}


