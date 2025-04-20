/*    * * * * * * 
      _ * * * * 
      _ _ * * 
      _ _ * *
      _ * * * * 
      * * * * * *
*/

#include<iostream>
using namespace std;

int main() {
  int n = 3;
  for(int row = 1; row <= 2*n; row ++) {
  if(row <=n) {
    for(int col = 1; col <= row-1; col++) {
      cout << " " << " ";
    }
    for(int col=1; col <= 2*n-2*row+2; col++) {
      cout << "*" << " ";
    }
    
  } else {
    for(int col = 1; col <=2*n-row; col++) {
      cout << " " << " ";
    }
    for(int col = 1; col <= 2*row-2*n;col++) {
      cout << "*" << " ";
    }
  }
  cout << endl;
  }
}



