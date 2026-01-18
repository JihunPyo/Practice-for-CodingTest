#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=0;k<2*n-2*i-1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}	
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=0;k<2*n-2*i-1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}