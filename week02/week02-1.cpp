///week02-1.cpp
///�bCodeblocks�̭��A�����}�� Settings-Compiler...��C++11����
///SOIT106_ADVANCE_001 using C++
#include <iostream> ///cin cout Ū�J��X
#include <string> ///string�r��\��
using namespace std;
int main(){
	string a,ans; ///�ŧi
	cin>>a; ///Ū�J
	int N = a.length(); ///�r��a������
	for(int i=N-1; i>=0; i--){ ///�˹L�Ӫ��j��
		ans += a[i]; ///�b�j��̭��A��a[i]���ans�᭱
	}
	cout <<a<<'+'<<stoi(ans)<<'='<<stoi(a)+stoi(ans)<<endl;
} ///stoi() is "string to int" ��r���ܦ����
