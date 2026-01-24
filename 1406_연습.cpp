#include <iostream>
#include <list>
using namespace std;
int main(){
    list<char> editor;
    editor.push_front('a');
    auto it = --editor.end();
    cout<< *it<<endl;
}

list type 정리
1. li.begin()의 결과, 첫 요소를 가리키는 이터레이터가 반환됨
2. li.end()시 맨 마지막 아이템의 다음을 가리키는 요소가 반환됨. 끝을 포함하지 않는 반구간 형태로 코딩하는 것이 자연스럽고 편하기 때문.

