///week05-5a.cpp
# include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int M = a,m=a;
    for(int i=0; i<5; i++){
        cin >> a;
        if( M<a ) M = a;
        if( m>a ) m = a;
    }
    cout << M-m;
}
