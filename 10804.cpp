#include <bits/stdc++.h>
using namespace std;
void change(int a[],int s, int l);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for(int i=0;i<10;i++){
        int s=0,l=0;
        cin>>s>>l;
        change(a,s-1,l-1);
    }
    for(int i=0;i<20;i++){
        cout<<a[i]<<" ";
    }
}

void change(int a[],int s, int l){
    int it_num=0;
    if((l-s)%2==0){
        it_num=(l-s)/2; //swap을 반복할 횟수
    }
    else{
        it_num=(l-s)/2 +1;
    }

    for(int i=0;i<it_num;i++){
        swap(a[s+i],a[l-i]);
    }
}