/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/2165
	PS Name :  Tower Of Hanoi

*/

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void TOH(int n, int a, int b, int c, vector<pair<int, int>> &ans){
    if(n > 0){
        TOH(n-1, a, c , b, ans);
        ans.push_back({a, c});
        TOH(n-1, b, a, c, ans);
    }
}

int main(){

    int n;
    cin >> n;

    vector<pair<int, int>> ans;

    TOH(n, 1, 2, 3, ans);

    cout << ans.size() << endl;

    for(auto x : ans){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}