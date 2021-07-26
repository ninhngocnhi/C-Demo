//#include<iostream>
//#include <math.h>
//using namespace std;
//int main (){
//	long long N;
//	cin>>N;
//	double n= (double)sqrt(N);
//	long long T=N;
//	long long l=1,r;
//	for(int i = 2; i <= N; i++){
//        int dem = 0;
//        while(N % i == 0){
//            ++dem;
//            N /= i;
//        }
//        l*=pow(i,dem/2);
//    }
//    
//	r=T/l;
//	double L= n- double(l);
//	double R= double(r)-n;
//	if(L<R){
//		cout<<l;
//	}
//	else{
//		cout<<r;
//	}
//	return 0;
//}
#include <iostream>
#define L 1000000007 
using namespace std;
main ()
{
	long long n,m,i;
	long long sum=1;
	long long k[100000];
	long long x[100000];
	cin >> n >>m;
	long long j=m+1;
	for(i=0;i<n;i++)
	{
		cin >> k[i] >> x[i];
	}
	while(j--)
	{
		for(i=0;i<n;i++)
		{
			if(k[i]==1)
			{
				sum=(sum+x[i])%L;
			}
			else
			{
				sum=(sum%L)*(x[i]%L);
			}
		}
	}
	cout << sum%L;
 return 0;
}
