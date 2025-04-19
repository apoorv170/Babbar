/*    * * * * *
      *       *
      *       *
      *       *
      * * * * *
*/

#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int missingStar = n - 2;
  //outer loop for rows
  for(int row = 1; row <=n; row++) {
    if(row == 1 || row == n) {
      for(int col = 1; col<=n; col++)  {
        cout << "*" << " ";
      }
      cout << endl;
    } else {
    cout << "*" << " ";
    for(int col = 1; col <= missingStar; col++) {
      cout << " " << " ";
    }
    cout << "*";
    cout << endl;
    }
  }
}
