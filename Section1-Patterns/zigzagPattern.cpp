#include <iostream>
using namespace std;

void printPattern(int n) {
    int totalRows = 2 * n - 1;

    for (int i = 0; i < totalRows; i++) {
        for (int j = 0; j < 2 * n + 1; j++) {
            if (i < n) {
                // Top half
                if (j == i || j == 2 * n - i)
                    cout << "*";
                else
                    cout << "_";
            } else {
                // Bottom half
                int mirrorI = totalRows - 1 - i;
                if (j == mirrorI || j == 2 * n - mirrorI)
                    cout << "*";
                else
                    cout << "_";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter an even number n (e.g. 4, 6, 8...): ";
    cin >> n;

    if (n % 2 != 0 || n < 2) {
        cout << "Please enter a valid even number >= 2.\n";
    } else {
        printPattern(n);
    }

    return 0;
}

