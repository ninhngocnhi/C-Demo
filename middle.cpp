#include<iostream>
#include <math.h>
using namespace std;
int check(int a){
	if(0<=a && a<10){
		return 0;
	}
}
int main (){
	int h1,m1;
	char c;
	cin>>h1>>c>>m1;
	int h2,m2;
	cin>>h2>>c>>m2;
	int x=(h2 - h1)*60 + m2 - m1;
	x=x/2;
	int min= m1+x;
	if(min<60){
		if(0<= h1 && h1<10 && 0<= min && min<10){
			cout<<"0"<<h1<<":"<<"0"<<min;
		}
		else if(0<= h1 && h1<10 && 10<= min){
			cout<<"0"<<h1<<":"<<min;
		}
		else if(10<= h1 && 0<= min && min<10){
			cout<<h1<<":"<<"0"<<min;
		}
		else{
			cout<<h1<<":"<<min;
		}
	}
	else{
		if(0<= h1+min/60 && h1+min/60 <10 && 0<= min%60 && min%60 <10 ){
			cout<<"0"<<h1+min/60<<":"<<"0"<<min%60;
		}
		else if(0<= h1+min/60 && h1+min/60 <10 && 10<= min%60 ){
			cout<<"0"<<h1+min/60<<":"<<min%60;
		}
		else if( 10<= h1+min/60 && 0<=min%60 && min%60 <10 ){
			cout<<h1+min/60<<":"<<"0"<<min%60;
		}
		else{
			cout<<h1+min/60<<":"<<min%60;
		}
	}
	return 0;
}

