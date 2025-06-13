#include <iostream>
#include <vector>
#include <algorithm>  // For min()
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> grid(10, vector<char>(10));
        
        // Read the grid
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    // Compute the ring number (1 to 5)
                    int ring = min({i, j, 9 - i, 9 - j}) + 1;
                    
                    // Increment the correct counter
                    if (ring == 1) r1++;
                    else if (ring == 2) r2++;
                    else if (ring == 3) r3++;
                    else if (ring == 4) r4++;
                    else if (ring == 5) r5++;
                }
            }
        }

        // Calculate total points
        int total = r1 * 1 + r2 * 2 + r3 * 3 + r4 * 4 + r5 * 5;
        cout << total << endl;
    }
    return 0;
}