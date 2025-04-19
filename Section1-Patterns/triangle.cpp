#include<iostream>
using namespace std;

/* 
*
* *
* * *
* * * *
* * * * *
*/

int main() {
  int n = 5;
  //Here i need 5 rows
  // 1 row 1 star ....
  //2 row 2 stars ... so col dependent on row!
  
  for (int row = 1; row <= n; row++) {
    for(int col = 1; col<=row; col++) {
      cout << "*" << " ";
    }
    cout << endl;
  } 
}
