// week07-3.cpp �ǲ߭p�e Simulation ��3�D
// 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:     // vector �O C++ ���}�C�A���Y�ۦp�A���O 2D ������g
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // C�y�����}�C�A�j�@�йL�A���²�� //{}�j�A���N���l�ȡA�u�̭��Ū��v�N���O0
        int now = 1; // �{�b�����a 1:���aA�A2:���aB
        int winner = 0; //�٨S���o�Ӫ����a
        for(vector<int>& move : moves){
            int i = move[0], j= move[1]; //���X�y��
            a[i][j] = now; // ��Ѥl�A�U�b�}�C��
            ///�U����A�n�ˬd�u���S���o�ӡv!
            if(now==a[i][0] && now==a[i][1] && now==a[i][2]) winner = now; //��u
            if(now==a[0][j] && now==a[1][j] && now==a[2][j]) winner = now; //���u
            if(now==a[0][0] && now==a[1][1] && now==a[2][2]) winner = now; //���W�k�U�׽u
            if(now==a[0][2] && now==a[1][1] && now==a[2][0]) winner = now; //�k�W���U�׽u
            if(now==1) now = 2; //��H�n�洫 1��2
            else now = 1; //�� 2��1
        }
        if (winner==1) return "A";
        else if(winner==2) return "B";
        else if(moves.size()==9) return "Draw"; //���⪺�^�� Draw
        else return "Pending"; //�e�X�h�A�o�{�٦���4�إi��A�sPending �٨S�U��
    }
};
