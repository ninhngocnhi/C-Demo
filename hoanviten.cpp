#include <bits/stdc++.h>
using namespace std;
struct inf{
	char s[100];
};
int main (){
	int n;
	cin>>n;
	inf ds[n];
	inf ds1[n];
	for(int i=0;i<n;i++){
		cin>>ds[i].s;
		strcpy(ds1[i].s,ds[i].s);
	}
	for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (strcmp(ds1[j - 1].s, ds1[j].s) > 0) {
            	char t[100];
	            strcpy(t, ds1[j - 1].s);
	            strcpy(ds1[j - 1].s, ds1[j].s);
	            strcpy(ds1[j].s, t);
         	}
      	}
   	}
//   	for (int j = 0; j < n; j++) {
//        cout<<ds1[j].s<<endl;
//  	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(strcmp(ds1[i].s, ds[j].s) == 0){
				cout<<j+1<<" ";
				break;
			}
		}
	}
	return 0;
}
