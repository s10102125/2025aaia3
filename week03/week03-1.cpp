///week03-1.cpp �ǲ�C++�}�C vector<int> a;
///�s�ɭn�gcpp
#include <iostream>
#include <vector> ///�}�C
using namespace std;

int main(){
    vector<int> a(2); ///���}�C�A�̭���2��
    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///�L�X�}�C
    cout << endl; ///����

    a.push_back(99); ///��99����}�C a ����᭱(C�y��������) .push_back()
    a.push_back(77); ///��77����}�C a ����᭱

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///�L�X�}�C
    cout << endl; ///����
}
