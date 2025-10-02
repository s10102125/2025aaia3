// week04-4d.cpp Part1: Input Part2:Output
// YKL08.UVA100 The 3n + 1
// Part 3: Alogorithm(while,if), Part4:now
// Part 5:for(int i=a; i<=b; i++) { int n=i;
#include <iostream>
using namespace std;
int main(){
	int a,b; //Part1: Input
	while( cin >> a >> b ){
		int ans = 0;
		int a2=a, b2=b; //Part 6
		if(a2>b2) swap(a2, b2); //Part 6
		for(int i=a2; i<=b2; i++){ //Part 5 Part 6
			int now = 1; // Part 4
			int n =i;
			while(n!=1){ //Part 3
				if(n%2==1) n = 3*n+1;
				else n /= 2;
				now++; //Part 4
			}
			if(now>ans) ans = now; //Part 4
		}
		cout << a << " " << b << " " << ans << endl;
	}//Part2: Output
}
