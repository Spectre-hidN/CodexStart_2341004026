/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1623
	PS Name :  Apple Division

*/

#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

void appleDivision(lli i, lli n, lli sum1, lli sum2, vector<int> &weights, lli &mi){
    if(i == n){
        mi = min(mi, abs(sum1 - sum2));
        return;
    }
    appleDivision(i+1, n, (sum1 + weights[i]), sum2, weights, mi);
    appleDivision(i+1, n, sum1, sum2+weights[i], weights, mi);
}

int main() {

    lli n;
    cin >> n;

    lli mi = LONG_LONG_MAX;

    vector<int> weights(n);

    for(int i = 0; i < n; i++) cin >> weights[i];

    appleDivision(0, n, 0, 0, weights, mi);

    cout << mi << endl;


    return 0;
}