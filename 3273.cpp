#include <bits/stdc++.h>
using namespace std;
long long a[10000001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
		int k;
		cin >>k;
		arr[i]=k;
		a[k]++;
	}
	long long goal=0,cnt=0;
	cin>>goal;
	for(int i=0;i<n;i++){
		if(goal-arr[i]>0&&a[goal-arr[i]]==1) cnt++;
	}
	cout<<cnt/2;


	return 0;
}