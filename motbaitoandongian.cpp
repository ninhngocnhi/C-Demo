#include<bits/stdc++.h>
using namespace std;
const long MIN= -1000000009;
int main()
{
	int n;
	long a[100005];
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	long maxx=a[0];
	long minn=a[0];
	long dis = MIN;
	long dis2 = MIN;
	for (int i=1;i<n;i++)
	{
		if (minn>a[i])
		{
			maxx=a[i];
			minn=a[i];
			dis2=max(dis2,a[i]-a[i-1]);
		}
		else
		{
			maxx=max(maxx,a[i]);
			dis=max(dis,maxx-minn);
		}
	}
	if (dis == MIN) cout<<dis2;
	else cout<<dis;
	return 0;
}
