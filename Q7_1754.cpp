/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1754
	PS Name :  Coin Piles

*/

#include <iostream>

using namespace std;

typedef long long int lli;

int main() {

    lli t, a, b;

    cin >> t;

    for(lli i = 0; i < t; i++){
        cin >> a >> b;
        if(b > a){
            if(b > 2*a || (a+b) % 3 != 0){
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
        else if(a > b){
            if(a > 2*b || (a+b) % 3 != 0){
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
        else {
            if((a+b) % 3 != 0)
                cout << "NO" << endl;
            else 
                cout << "YES" << endl;
        }
    }

    return 0;
}