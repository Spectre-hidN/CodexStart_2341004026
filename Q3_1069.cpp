/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1069
	PS Name :  Repetitions

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int maxRepeat = 0;
    int tmpRepeat = 0;
    int repeated = 0;

    string inputSTR;
    getline(cin, inputSTR);

    //Convert to char array
    const char *charArr = inputSTR.c_str();
    int strLen = inputSTR.length();

    for(int i = 1; i < strLen; i++) {
        
        if(charArr[i - 1] == charArr[i]) {
            repeated += 1;
        } else {
            repeated = 0;
        }
        
        if(repeated != 0){
            tmpRepeat = repeated + 1;
        }

        if(tmpRepeat > maxRepeat) maxRepeat = tmpRepeat;

    }

    if(maxRepeat == 0) maxRepeat = 1;

    cout << maxRepeat;

    return 0;
}