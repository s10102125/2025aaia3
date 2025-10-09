///week05-5b.cpp
# include <iostream>
using namespace std;
int main(){
    int a;
    int M = -9999,m= 9999;
    for(int i=0; i<5; i++){
        cin >> a;
        if( M<a ) M = a;
        if( m>a ) m = a;
    }
    cout << M-m;
}
