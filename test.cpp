#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

int ngay[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int sinh(int minn, int maxx){
	return minn + rand()%(maxx+1-minn);
}

int main(){
	int t = 10;
	for(int i=0;i<10;i++){
		int y=sinh(1,2030);
		cout<<y<<endl;
		int m=sinh(1,12);
		cout<<m<<endl;
		int d;
		if(((y%400==0 )||(y%4==0 && y%100!=0)) && m==2){
			d==sinh(1,29);
		}
		else d=sinh(1,ngay[m]);
		cout<<d<<endl;
		cout<<"ngày "<<d<<",tháng "<<m<<",nam "<<y<<endl;
	}
	return 0;
}