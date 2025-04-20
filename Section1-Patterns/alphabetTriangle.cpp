/*    A
      AB
      ABC
      ABCD
      ABCDE
*/

#include<iostream>
using namespace std;

int main() {
  int n = 5;
  char v = 'A';
  for(int row=1; row <= n;row++) {
    v = 'A';
    for(int col=1; col <=row; col++) {
      cout << v << " ";
      v++;
    }
    cout << endl;
  }
}
