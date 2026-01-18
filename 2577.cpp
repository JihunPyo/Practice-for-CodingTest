#include <bits/stdc++.h>
using namespace std;

int main() {
	int mul=1;
	for(int i=0;i<3;i++){
		int k=0;
		cin>>k;
		mul *= k;
	}
	int a[10]={};
	//자릿수 세기
	while(mul>0){
		a[mul%10] +=1;
		mul /=10;
	}
		

	for(int i=0;i<10;i++){
		cout<<a[i]<<'\n';
	}

	return 0;
}