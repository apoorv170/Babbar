/*    _ _ *
      _ * * *
      * * * * *
      _ * * *
      _ _ *
*/

#include<iostream>
using namespace std;

int main() {
  int n = 4;
  for(int row = 1; row <= 2*n-1; row++) {
  if(row <= n) {
    for(int col = 1; col <=n-row; col++) {
      cout << " " << " ";
    }
    for(int col = 1; col <= 2*row-1; col++) {
      cout << "*" << " ";
    }
  } else {
    for(int col = 1; col <= row - n; col++) {
      cout << " " << " ";
    }
    for(int col = 1; col <=2*n - row; col++) {
      cout << "*" << " ";
    }
    for(int col = 1; col <=2*n-row-1;col++) {
      cout << "*" << " ";
    }
    //Combine the above two loops to form 
    // 4*n-2*row-1
  }
  cout << endl;
  }
}
