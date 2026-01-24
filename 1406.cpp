#include <bits/stdc++.h>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    string input;
 
    cin >> input;
    list<char> li(input.begin(), input.end());
    auto iter = li.end(); // 커서는 이터레이터의 다음에 있다고 생각하기. 가상으로 생각해야 함

	int it_num;
	cin>>it_num;
	for(int i=0;i<it_num;i++){
		char c;
		cin>>c;
		if(c=='P'){ //P command. 한글자 더 입력받아서 list에 삽입.
			cin>>c;
			li.insert(iter,c); //현재 가리키고 있는 위치의 앞에 삽입하기.
		}else if(c=='L'){
			if(iter==li.begin()){}
			else {iter--;} //iter가 맨 앞에 있을 때는 따로 처리해야할듯
		}else if(c=='D'){
			if(iter!=li.end()){iter++;}
		}else{
			if(iter==li.begin()){}
			else{iter = li.erase(--iter);}
		}
	}
	for(auto x: li){
		cout<<x;
	}
    

}