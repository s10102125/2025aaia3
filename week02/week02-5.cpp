//week02-5.cpp LeetCode �ǲ߭p�e��2�D
//389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //�����B�έp�@�U26�Ӧr���X�{�X��
        int A[256] = {}; //�}�C�ŧi�AASCII:0-255�}�C�Τj�A�����w�]��0
        for(int i=0; i<s.length(); i++){
            char c= s[i];
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i]; //����i�Ӧr��
            A[c]--;//�q��l���X�r��
            if(A[c] < 0) return c; //�r�������ΡA�N�O�L!�ʥL!
        }
        return 0;
    }
};
