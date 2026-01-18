#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[26];
	for(int i=0;i<26;i++) a[i]=-1;
	// 여기까지 배열 초기화
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(a[s[i]-'a']==-1){
			a[s[i]-'a'] =i;
		}
	}
	for(int i=0;i<26;i++) cout<<a[i]<<' ';

}
