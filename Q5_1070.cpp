/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1070
	PS Name :  Permutations

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 1) cout << "1 ";
    else if (n <= 3) cout << "NO SOLUTION";
    else {
        for(int i = 2; i <= n; i+=2) {cout << i << " ";}
        for(int i = 1; i<=n; i+=2) {cout << i << " ";}
    }
}