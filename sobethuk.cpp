#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main (){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	printf("%d",a[k+1]);
	return 0;
}

