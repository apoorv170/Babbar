#include<iostream>
using namespace std;

int main() {
  int n = 3 , m = 5;
  for(int row = 1; row <= n; row++) {
    for(int col = 1; col <= m; col++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}
