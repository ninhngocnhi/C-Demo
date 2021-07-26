//#include <bits/stdc++.h>
//using namespace std;
//int main (){
//	long long x[100000],y[100000];
//	long long ans=0;
//	long long p;
//	cin >> p;
//	while(p--){
//		long long n,b,j=0;
//		cin >> n >> b;
//		for(long long i=2;i<=sqrt(b);i++)
//		{
//			long long a=0;
//			if(b%i==0)
//			{
//				while(b % i == 0 )
//				{
//					a++;
//		            b=b/i;
//		    	}
//		    	x[j]=i;
//		        y[j]=a;
//		    	j++;
//		    }
//		}
//		if(b>1)
//		{
//			x[j]=b;
//			y[j]=1;
//			j++;
//		}
//		long long c[j]={0};
//		for(long long i=0;i<j;i++)
//		{
//			long long sum=0;
//			long long l=(log(n))/(log(x[i]));
//			for(long long h=1;h<=l;h++)
//			{
//				sum=sum+n/pow(x[i],h);
//			}
//			c[i]=sum/y[i];
//		}
//		sort(c,c+j);
//		cout << c[0]<< endl;
//	}
// return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
	long long n,b;
	cin>>n>>b;
	vector<int> d(1000005,0);
	long a=sqrt(b)+1;
   	for(long i=2;i<=a;i++){
   			while(b%i==0){
   				b/=i;
   				d[i]++;
			   }
		}
	if(b>1) d[b]++;
	long long minn=1e18+7;
	for(long i=2;i<=a;i++){
		if(d[i]!=0){
			long long sum=0;
			int k=log(n)/log(i);
			for(int j=1;j<=k;j++){
				sum+=n/pow(i,j);
			}
			sum/=d[i];
			minn=min(minn,sum);
		}
	}
	if(d[b]==1){
		long long sum=0;
		int z=log(n)/log(b);
		for(int j=1;j<=z;j++){
			sum+=n/pow(b,j);
		}
		minn=min(sum,minn);
	}
	cout<<minn<<endl;
}
}
