
// week03-2a.cpp �G�X�@ �n�g2��
// Leetcode �ǲ߭p�e��8�D 1822. Sign of the Product of an Array
// ��}�C���_�ӡA�ݬO���ơB�t�ơA�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // �]��0������Ƴ��|�ܦ�0�A�u��1�̨ġA���ƻ�O�ƻ�
        for(int i=0; i<nums.size(); i++){ // �ݦ��X�ӼơA�j��]�X��
            ans *= num[i]; // �C���� num[i] ���i ans ��
        } // �Ʀr�V���V�j�A1000�ӼƦr�A����@�b�N�z���F�A�ҥH�{�����F
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
