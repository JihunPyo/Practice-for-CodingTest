#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin>>s;

	int len= s.length();

	for(char i='a';i<='z';i++){
		int cnt=0;
		for(int j=0;j<len;j++){
			if(s[j]==i) cnt++;
		}
		cout<<cnt<<" ";
	}


	return 0;
}