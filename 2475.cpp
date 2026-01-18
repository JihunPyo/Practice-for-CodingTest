#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n=0;
	int sum=0;
	for(int i=0;i<5;i++){
		cin>>n;
		sum += n*n;
	}
	cout<<sum%10;
	return 0;
}