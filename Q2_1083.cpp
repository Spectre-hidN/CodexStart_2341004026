/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1083
	PS Name :  Missing Number

*/

#include <iostream>

using namespace std;


int main() {
    unsigned long int n;
    cin >> n;

    unsigned long int arr[n-1];

    for(unsigned long int i = 0; i < n-1 ; i++) {
        cin >> arr[i];
    }

    unsigned long int expectedSum = (n * (n+1)) / 2;
    unsigned long int actualSum = 0;

    for(unsigned long int j = 0; j < n - 1; j++){
        actualSum += arr[j];
    }

    cout << expectedSum - actualSum;

    return 0;
}