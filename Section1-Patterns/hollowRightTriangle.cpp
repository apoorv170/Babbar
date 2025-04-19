/*  *
    * *
    *   *
    *     *
    * * * * *
*/

#include<iostream>
using namespace std;

int main() {
  int n = 5;
  for (int row = 1; row <=n; row++) {
    if(row == 1) {
      cout << "*" << " ";
      cout << endl;
    } else if (row == n) {
      for(int col = 1; col <=n; col++) {
        cout << "*" << " ";
      }
      cout << endl;
    } else {
      cout << "*" << " ";
      for(int col = 0; col< row-2; col++) {
        cout << " " << " ";
      }
      cout << "*" << " ";
      cout << endl;
    }
  }
}
