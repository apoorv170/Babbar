/*      _ _ _ *
        _ _ * _ *
        _ * _ _ _ *
        * _ _ _ _ _ *
        _ * _ _ _ *
        _ _ * _ *
        _ _ _ *
*/
#include<iostream>
using namespace std;

int main() {
  int n = 5;
  for(int row = 1; row <=2*n-1; row++) {
    if(row <=n) {
      for(int col = 1; col <=n-row;col++) {
        cout << " " << " ";
      }
      if(row == 1) {
        cout << "*" << " ";
      } else {
        cout << "*" << " ";
        for(int col =1; col <=2*row-3;col++) {
          cout << " " << " "; 
        }
        cout << "*" << " ";
      } 
    } else {
      for(int col = 1; col <= row-n; col++) {
        cout << " " << " ";
      }
      if(row == 2*n-1) {
        cout << "*" << " ";
      } else {
        cout << "*" << " ";
        //Used my brain and found out this below
        for(int col = 1; col <=4*n-2*row-3; col++) {
          cout << " " << " "; 
        }
        cout << "*" << " ";
      }
    }
    cout << endl;
  }
}
