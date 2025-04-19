/*   * * * * *
     *       *
     * * * * *
*/

#include<iostream>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  int spaces = m-2;
  //n = 3 , m = 5
  for (int row = 1; row <= n; row++) {
    if(row == 1 || row == n) {
      for(int col = 1; col <=m; col++) {
        cout << "*" << " ";
      }
      cout << endl;
    } else {
      cout << "*" << " ";
      for(int col = 1; col <= spaces; col++) {
        cout << " " << " ";
      }
      cout << "*" << " ";
      cout << endl;
    }
  }
}
