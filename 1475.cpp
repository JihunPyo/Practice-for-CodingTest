#include <bits/stdc++.h>
using namespace std;
long long a[9]; // 9가 나오면 6에 저장하도록 할 것이므로, 9를 제외한 0~8을 위한 배열 생성
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin>>n;
	while(n>0){
		if(n%10==9){
			a[6]++;
		}else{
			a[n%10]++;
		}
		n /=10;
	}
	if(a[6]%2!=0){
		a[6] = a[6]/2+1;
	}else{
		a[6]=a[6]/2;
	}
	long long max=0;
	for(int i=0;i<9;i++){
		if (a[i]>max) max=a[i];
	}
	cout<<max;

	return 0;
}