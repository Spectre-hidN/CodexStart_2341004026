/*

	Name	:  Aditya Kumar Das
	Reg. No.:  2341004026
	PS Link	:  https://cses.fi/problemset/task/1071
	PS Name :  Number Spiral

*/

#include <iostream>

using namespace std;

long long int solveDiagonal(long long int x) {
    return x*x - (x - 1); //Row * column - (Row - 1)
}

int main() {
    
    int T;
    
    cin >> T;

    for(int i = 0; i < T; i++){
        unsigned long long int x, y;

        long long finalResult = 0;

        cin >> x >> y;

        // Solve for diagonal
        if(x == y) {
            finalResult = solveDiagonal(x);
        }
        // Solve if row > column
        else if(x > y) {
            unsigned long long int nearestDiagonal = solveDiagonal(x);

            // If Row number is odd, subtract from nearestDiaginal value or else add to nearestDiagonal value.
            if(x % 2 == 0) 
                finalResult = nearestDiagonal + (x - y); // nearestDiagonal + (Row - column)
            else
                finalResult = nearestDiagonal - (x - y); // nearestDiagonal - (Row - column)
        }
        // Solve if Column > Row
        else if(y > x){
            unsigned long long int nearestDiagonal = solveDiagonal(y);

            // If Column number is odd, add to nearestDiaginal value or else subtract from nearestDiagonal value.
            if(y % 2 == 0)
                finalResult = nearestDiagonal - ( y - x);
            else
                finalResult = nearestDiagonal + (y - x);
        }

        cout << finalResult << endl;
    }

}