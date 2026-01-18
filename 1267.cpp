#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a[10001];
  int nums=0;
  int Y=0,M=0;

  cin>>nums;
  for(int i=0;i<nums;i++){
    cin>>a[i];
    Y += ((a[i]/30)+1)*10;
    M += ((a[i]/60)+1)*15;
  }


  if(Y>M){
    cout<<"M "<<M;
  }else if(Y<M){
    cout<<"Y "<<Y;   
  }else{
    cout<<"Y M "<<Y;
  }
}