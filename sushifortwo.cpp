#include <iostream>
#include <vector> 
using namespace std;
int main (){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	int k=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=0;
	}
	for(int i=0;i<n;i++){
		b[i]++;
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				b[i]++;
				a.erase(a.begin()+j);
				n--;
			}
			else{
				break;
			}
		}
		k=i;
	}
	for(int i=0;i<=k;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

