/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1094
	PS Name :  Increasing Array

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    long long int x, maxX, sum;

    sum = 1;

    cin >> n;
    cin >> maxX; 

    for(int i = 1; i < n; i++){
        cin >> x;
        maxX = max(maxX, x);
        sum += (maxX - x); 
    }
    
    sum = sum - 1;
    cout << sum;

    return 0;
}