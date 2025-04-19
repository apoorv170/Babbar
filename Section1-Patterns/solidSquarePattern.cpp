#include<iostream>
using namespace std;

int main() {
  int n = 5;
  //outer loop prints rows
  for(int row = 1; row <= n; row++) {
  //inner loop prints columns
    for(int col =1; col <= n; col++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

//Process:
// Check for i/p 's
// Check for check for rows
// Check for formula of columns
// Analyse the code
