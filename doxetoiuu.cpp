#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main (){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int s = 2*(a[n-1]-a[0]);
		printf("%d\n",s);
	}
	return 0;
}

