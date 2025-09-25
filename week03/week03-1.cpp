///week03-1.cpp 學習C++陣列 vector<int> a;
///存檔要寫cpp
#include <iostream>
#include <vector> ///陣列
using namespace std;

int main(){
    vector<int> a(2); ///有陣列，裡面有2格
    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///印出陣列
    cout << endl; ///跳行

    a.push_back(99); ///把99推到陣列 a 的更後面(C語言做不到) .push_back()
    a.push_back(77); ///把77推到陣列 a 的更後面

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///印出陣列
    cout << endl; ///跳行
}
