/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1068
	PS Name :  Weird Algorithm

*/

#include <iostream>

using namespace std;

int main() {

    unsigned long int n;
    cin >> n;
    
    while (n != 1){
        
        cout << n << " ";

        if(n % 2 == 0) {
            // if n is even then divide by 2
            n = n / 2;
        } else {
            // if n is odd then multiply it by 3 and add 1.
            n = n*3 + 1;
        }
    }

    cout << 1;

    return 0;
}
