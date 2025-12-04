// week13-4a.cpp
// SOIT107_ADVANCE_004
#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Enter two integers: " << endl;
	cin >> a >> b;
	int c=a;
	if(a<b) c=b;
	for(int i=c; i>1; i--){
		if(a%i==0 && b%i==0){
			cout << "The greatest common divisor of " << a << " and " << b << " is " << i << endl;
			break;
		}
	}
}
