/// week05-3c.cpp Part1:Input Part2:Output
/// Part3: stringstream Part4: reverse�ϹL��
/// Part5:�����Y +���[ +���[ +���[
/// CPE ��2�D UVA 483 �˹L��
#include <iostream>
#include <sstream> ///Part3: stringstream ���ɮ׬O sstream
#include <algorithm> /// Part 4: reverse ���t��k
using namespace std;
int main()
{
    string line; ///�@��r���r�� Part 1:Input
    while(getline(cin,line)) { ///Ū�i��
        stringstream ss(line); /// Part 3:�� stringstream �_�r
        string word; ///�r��i��
        ss >> word; ///�����Y�b�o��
        reverse( word.begin(),word.end() );
        cout << word; ///�u�����Y�v�S���Ů�
        while( ss >> word ){ ///Part 3: �� ss �_�r
            reverse( word.begin(), word.end() ); /// Part 4
            cout << " " << word; ///+���[
            ///cout << "Ū��F" << word << endl; ///Part 3
        }
        cout << endl;///cout << line << endl; /// Part 2: Output
    }
}
