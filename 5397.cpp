#include <bits/stdc++.h>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int num_test =0;
	cin>>num_test;
	string s;
	list<char> li{};
	auto cursor=li.end();

	while(num_test--){
		auto cursor=li.end();

		cin >>s;
		//길이를 모르기때문에 문자열을 그냥 쭉 받아오고,리스트에 집어넣어야 함.
		for(auto x:s){ 
			if(x=='<'){
				if(cursor!=li.begin()) cursor--;
			}else if(x=='>'){
				if(cursor!=li.end()) cursor++;
			}else if(x=='-'){
				if(cursor!= li.begin()) cursor=li.erase(--cursor);
			}else{
				li.insert(cursor,x);
			}
		}
		// 여기까지 리스트에 모두 입력 완료
		for(auto x: li){
			cout<<x;
		}
		cout<<'\n';
		li.clear();
	}
}