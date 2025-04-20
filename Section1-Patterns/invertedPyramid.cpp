/*   * * * * *
     _ * * * _
     _ _ * _ _
*/

#include<iostream>
using namespace std;

int main() {
  int n = 3;
  //3 parts to this question
  for(int row = 1; row<=n; row++) {
    for(int col = 1; col<=row-1;col++) {
      cout << " " << " ";
    }
    for(int col = 1; col <=n-row+1; col++) {
      cout << "*" << " ";
    }
    for(int col=1; col<=n-row;col++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}
