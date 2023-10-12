/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1618
	PS Name :  Trailing 0s

*/

#include <iostream>

using namespace std;

typedef long long int lli;  

int main() {

    lli n;

    int trailingZeros = 0;

    cin >> n;

    while(n / 5 > 0){
        trailingZeros += (n / 5);
        n /= 5;
    }

    cout << trailingZeros << endl;

    return 0;
}