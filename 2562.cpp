#include <iostream>
using namespace std;
int num,maxnum,cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for(int i=0;i<9;i++){
		cin>>num;
		if(num>maxnum){
			maxnum=num;
			cnt=i+1;
		}
	}
	cout<<maxnum<<'\n';
	cout<<cnt<<'\n';
	return 0;
}

//가능한 엣지 케이스. 1. 큰값이 가장 처음 등장. 