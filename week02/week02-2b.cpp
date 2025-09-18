//week02-2b.cpp
//SOIT106_ADVANCE_001
# include <iostream>
# include <string>
using namespace std;
int main(){
    string a,ans;
    cin>>a;
    int N = a.length();
    for(int i=N-1; i>=0; i--){
        ans += a[i];
    }
    cout <<a<<'+'<<stoi(ans)<<'='<<stoi(a)+stoi(ans)<<endl;
}
