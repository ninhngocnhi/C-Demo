#include <iostream> 
using namespace std; 
int getSum(int BITree[], int index) { 
    int sum = 0;
    index = index + 1; 
    while (index>0) { 
        sum += BITree[index]; 
        index -= index & (-index); 
    } 
    return sum; 
}
void updateBIT(int BITree[], int n, int index, int val) {
    index = index + 1; 
    while (index <= n) { 
    BITree[index] += val; 
    index += index & (-index); 
    } 
} 
int *constructBITree(int arr[], int n) { 
    int *BITree = new int[n+1]; 
    for (int i=1; i<=n; i++) 
        BITree[i] = 0; 
    for (int i=0; i<n; i++) 
        updateBIT(BITree, n, i, arr[i]); 
    return BITree; 
} 
int main() { 
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int *BITree = constructBITree(a,n);
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		if(x==1){
			int y;
			cin>>y;
			cout<< getSum(BITree,y-1)<<endl;
		}
		else{
			int y,val,last;
			cin>>y>>val>>last;
			a[y-1]+=val;
			updateBIT(BITree,n,y-1,val);
			cout<<getSum(BITree,last-1)<<endl;
		}
	}
    return 0; 
} 
