///week02-1.cpp
///在Codeblocks裡面，必須開啟 Settings-Compiler...把C++11打勾
///SOIT106_ADVANCE_001 using C++
#include <iostream> ///cin cout 讀入輸出
#include <string> ///string字串功能
using namespace std;
int main(){
	string a,ans; ///宣告
	cin>>a; ///讀入
	int N = a.length(); ///字串a的長度
	for(int i=N-1; i>=0; i--){ ///倒過來的迴圈
		ans += a[i]; ///在迴圈裡面，把a[i]塞到ans後面
	}
	cout <<a<<'+'<<stoi(ans)<<'='<<stoi(a)+stoi(ans)<<endl;
} ///stoi() is "string to int" 把字串變成整數
