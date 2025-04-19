#include<iostream>
#include<vector>
using namespace std;

int main() {
  int item = 44;
  vector<int> arr{2,44,12,14};
  for(int i = 0; i < arr.size();i++) {
    if(item == arr[i]) {
      cout << "Found " << i << endl;
    } else {
      continue;
    }
  }
}
