#include<iostream>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int a[n];
	int res = 0;
	for(int i=1;i<=n;i++) cin>>a[i];
	int maxx = a[1];
	int minn = a[1];
	int vtmax=1;
	int vtmin=1;
	for (int i=1;i<=n;i++){
		if ( a[i] > maxx ){
			maxx = a[i];
			vtmax = i;  
		}
		if ( a[i] < minn ){
			minn = a[i];
			vtmin = i;	
		}
	}	
	if (vtmin > vtmax ) swap (vtmin, vtmax);
	int dis_min, dis_max;
	dis_min = vtmin - 1;
	dis_max = n - vtmax;
	if (dis_max > dis_min){
		res = n- vtmin;
	}
	else{
		res = vtmax - 1;	
	}  
	cout<<res;
return 0;
}
