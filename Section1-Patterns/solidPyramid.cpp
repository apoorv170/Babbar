/*   _ _ _ _ *
     _ _ _ * * *
     _ _ * * * * *
     - * * * * * * *
     * * * * * * * * *
*/

#include<iostream>
using namespace std;

int main() {
  int n = 7;
  //First we gonna print inverse triangle of spaces
  for(int row = 1; row <=n; row++) {
    for(int col = 1; col <=n-row; col++) {
      cout << " " << " ";
    }
    for(int col=1; col<=row;col++) {
      cout << "*" << " ";
    }
    for(int col = 1; col <=row-1; col++) {
      cout << "*" << " ";
    }
    cout << endl;
    
  }
  //Second is triangle
  //Third is opp.triangle
}
