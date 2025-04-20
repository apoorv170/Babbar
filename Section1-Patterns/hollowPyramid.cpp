/*    _ _ _ _ *
      _ _ _ * _ *
      _ _ * _ _ _ *
      _ * _ _ _ _ _ *
      * * * * * * * * *
*/

#include<iostream>
using namespace std;

int main() {
  int n = 5;
  for(int row = 1; row <= n; row++) {
    for(int col = 1 ; col <= n-row ; col++) {
      cout << " " << " ";
    }
    if(row == 1 || row == n) {
      for (int col = 1; col<=2*row-1; col++) {
        cout << "*" << " ";
      }
    } else {
      cout << "*" << " ";
      for(int col = 1; col <= 2*row-3; col++) {
        cout << " " << " ";
      }
      cout << "*" << " ";
    }
    cout << endl;
  }
}

