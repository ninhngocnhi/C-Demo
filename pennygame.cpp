#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	for(int k=0;k<n;k++){
		string a;
		cin>>a;
		int b[8]={0},u;
		cin>>u;
		for(int i=0;i< a.length()-2;i++){
			if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='T'){
				b[0]++;
			}
			if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='H'){
				b[1]++;
			}
			if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='T'){
				b[2]++;
			}
			if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='H'){
				b[3]++;
			}
			if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='T'){
				b[4]++;
			}
			if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='H'){
				b[5]++;
			}
			if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='T'){
				b[6]++;
			}
			if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='H'){
				b[7]++;
			}
		}
		cout << u <<" ";
		for(int j=0;j<8;j++){
			cout<< b[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

