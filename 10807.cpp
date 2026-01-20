#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;

	int* a = new int[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int num,cnt=0;
	cin>>num;
	for(int i=0;i<n;i++){
		if(num==a[i]) cnt++;
	}
	cout<<cnt;
	delete[] a;
	return 0;
}