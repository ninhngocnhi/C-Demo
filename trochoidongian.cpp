#include <bits/stdc++.h>
using namespace std;
int n,d=0;
void quickSort(int Data[], int l , int r)
{
	if (l <= r)
	{
		int key = Data[(l+r)/2];
		int i = l;
		int j = r;
 
		while (i <= j)
		{
			while (Data[i] < key)
				i++;
			while (Data[j] > key)
				j--;
 
			if (i <= j)
			{
				swap(Data[i], Data[j]);
				i++;
				j--;
			}
		}
		if (l < j)
			quickSort(Data, l, j);
		if (r > i)
			quickSort(Data, i, r);
	}
}
int main (){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long d=0,check=0;
	for(int i=0;i<n-1;i++){
		int pos=i,min=a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]<min){
				min=a[j];
				pos=j;
			}
			else if(a[j]==a[i]){
				check=1;
			}
		}
		if(pos != i){
			d++;
			swap(a[pos], a[i]);
		}
	}
	long long r= 10+1999*n-d, f= 1+2000*n-d;
	
	if(r<0) cout<<"Ryze can’t"<<endl;
	else{
		if(check==1) cout<<"Ryze can"<<endl;
		else{
			if(r%2 == 0) cout<<"Ryze can"<<endl;
			else cout<<"Ryze can’t"<<endl;
		}
	}
	if(f<0) cout<<"Miss Fortune can’t"<<endl;
	else{
		if(check==1) cout<<"Miss Fortune can"<<endl;
		else{
			if(f%2 == 0) cout<<"Miss Fortune can"<<endl;
			else cout<<"Miss Fortune can’t"<<endl;
		}
	}
	return 0;
}


