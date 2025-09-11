//week01-3.cpp
# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; //¿é¤Jn
    int sum = 0;
    for(int i=1; i<=n; i++)
        sum += i*i;
    cout << sum;
}
