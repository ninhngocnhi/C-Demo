//#include <bits/stdc++.h>
//#include <algorithm>
//using namespace std;
//int n,m,b[100000]={0},a[100000];
//int check(int b[100000]){
//	int i,check;
//	for(int i=0;i<n;i++){
//		if(b[i]>=1){
//			check=1;
//		}
//		else{
//			check=0;
//			break;
//		}
//	}
//	return check;
//}
//void clean(int b[100000]){
//	int i;
//	for(int i=0;i<n;i++){
//		b[i]--;
//	}
//}
//int main (){
//	cin>>n>>m;
//	for(int i=0;i<m;i++){
//		cin>>a[i];
//		b[a[i]-1]++;
//		int dem=check(b);
//		if(dem==1){
//			clean(b);
//			cout<<"1 ";
//		}
//		else{
//			cout<<"0 ";
//		}
//	}
//	return 0;
//}
#include <iostream>
using namespace std;
main ()
{
	int n,m,x,i;
	int a[100000],b[100000];
	cin >> n >> m;
	for(i=1;i<=n;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<m;i++)
	{
		cin >> x;
		a[x]++;
		b[a[x]]++;
		if(b[a[x]]==n)
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}
 return 0;
}
