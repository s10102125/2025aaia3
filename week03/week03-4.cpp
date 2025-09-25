// week03-4.cpp
// Leetcode �D���D(�Ȫ����D)  120. Triangle  ���̤W�����U�����̤p��
class Solution { //�ϥΡu�ʺA�W�v�C�C��s�}�C�N�n�F
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // triangle[i][j] ��i�h����j�Ӽ�
        int N = triangle.size(); //�`�@���X�h
        //�q�U���W�d�A�̤U������ N-1 �h�A�S���D�A�N�O�������̤p�� �ҥHN-2���W��s
        for(int i=N-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
                //�C�ӤH�A�n�ݥ��U��2�ӿ��(���U��B�U�谾�k)�A��̤p�����@��
            }
        }
        return triangle[0][0];
    }
};
