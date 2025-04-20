/*     _ _ _ * * * *
       _ _ * * * *
       _ * * * *
       * * * * 
*/
#include<iostream>
using namespace std;

int main() {
  int n = 4;
  for(int row = 1; row <=n ; row++) {
    for (int col = 1; col <= n-row; col++) {
      cout << "_" << " ";
    }
    for(int col = 1; col <=n; col++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

