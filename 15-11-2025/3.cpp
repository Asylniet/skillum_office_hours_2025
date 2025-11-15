#include <iostream>

using namespace std;

int main() {
  int PATTERN_SIZE = 3;
  string s = "onetwothr";

  for(int i = 0; i < s.size() / PATTERN_SIZE; i++) {
    cout << s.substr(i * PATTERN_SIZE, PATTERN_SIZE) << endl;
  }

  return 0;
}