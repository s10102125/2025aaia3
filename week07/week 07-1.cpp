/// week07-1.cpp
/// TAICA ��j��¦�{���]�p(C++)�䤤���D
#include <iostream>
using namespace std;
int main(){
    int x1, x2, x3, x4; /// x�y��
    int y1, y2, y3, y4; /// y�y��
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int ans=0;
    for(int x=x1; x<x2; x++){ ///�̧��ˬd��1�Ӫ����
        for(int y=y1; y<y2; y++){ ///���C�@�Ӯ�l
            if(x3<=x && x<x4 && y3<=y && y<y4) ans++;
        } /// �ݳo�Ӯ�l�A�O���O�b��2�Ӫ���θ̭�
    } ///�`�N: �b�q��/�ƾǭ��A�ߺD�u����]�t�B�k�䤣�t�v
    cout << ans;
}
