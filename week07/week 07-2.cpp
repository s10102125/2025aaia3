/// week07-2.cpp
/// �e�X�W�j����ΡA�Ʀr�]�_��
/// TAICA ��j��¦�{���]�p(C++)�䤤���D ��6�D
#include <iostream>
#include <cmath> ///C�y���� math.h �̭��� sin() cos() abs() sqrt()
using namespace std;
int main(){
    int n; /// Part 1:Input
    cin >> n;

    for(int i=1; i<n*2; i++){ /// Part 2:Output
        for(int j=1; j<n*2; j++){
            ///�L�X�Ӥ���A�o�{�����ߪ�1�ܦ��N��/���I�F��!
            int d = max( abs(i-n), abs(j-n) );
            cout << d + 1;///cout << n;
        }
        cout << endl;///cout "�{�bi�O " << i << endl; /// �Ӽh������
    }

    ///Part 2: Output
} /// 2�|��3�h�ӡA3��5�h�ӡA4�|��7�h�ӡA5�|��9�h��
