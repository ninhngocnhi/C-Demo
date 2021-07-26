#include <bits/stdc++.h>
using namespace std;
int main (){
	int a,b;
	cin>>a>>b;
	int c,d;
	cin>>c>>d;
	float ans[4];
	ans[0]= abs((float)a / (float)c - (float)b / (float)d);
	ans[1]= abs((float)c / (float)d - (float)a / (float)b);
	ans[2]= abs((float)d / (float)b - (float)c / (float)a);
	ans[3]= abs((float)b / (float)a - (float)d / (float)c);
	float t=ans[0];
	int res=0;
	for(int i=1;i<4;i++){
		if(t<ans[i]){
			t=ans[i];
			res=i;
		}
	}
	cout<<res;
	return 0;
}


