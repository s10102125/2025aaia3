// week04-1.cpp �����D�A�ӭ��D�ؼg�{��
// Leetcode �D���D:3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // �@�}�l�N�ܤF�o��h�~
        while(numBottles >= numExchange) { //�p�G�~�l�� >= �I���q�A�N�I��
            numBottles = numBottles - numExchange +1; //�I��1�~����
            ans ++; //�h�ܤ@�~�F
            numExchange ++; //�I�����зǡu�h�@�~�v
        }
        return ans;
    }
};
