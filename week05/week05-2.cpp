///week05-2.cpp
///���x stringstream
#include <iostream> /// cin,cout,getline Ū�g���
#include <sstream> /// stringstream �ݭn��
#include <string> /// �ڭ̪��r�� string
using namespace std; ///�p�ߡA�o��e���ѤF�[
int main(){
    cout << "�п�J�@�q�^��A�̭��i���Ů�G";
    string s; /// �r��s
    getline(cin,s); ///�̦�Ū�J�@���A��Js
    cout << "Ū��Fs�r��G" << s << endl;
    stringstream ss(s); ///�N�r�� s �ܦ� ss
    string word; ///�r�� word
    while( ss >> word ){
        cout << "��1�Ӧr�G" << word << endl;
    }
}
