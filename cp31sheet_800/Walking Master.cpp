#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int diagonalMoves = d - b;
        // If we can't reach y = d by going up, it's impossible
        if (diagonalMoves < 0) {
            cout << -1 << endl;
            continue;
        }
        // After diagonal moves, x becomes:
        int newX = a + diagonalMoves;
        //Move left from newX to c
        int leftMoves = newX - c;
        // If we need to move right (which is not allowed), it's impossible
        if (leftMoves < 0) {
            cout << -1 << endl;
            continue;
        }
        int totalMoves = diagonalMoves + leftMoves;
        cout << totalMoves << endl;
    }
    return 0;
}
