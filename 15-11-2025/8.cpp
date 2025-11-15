#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n = 123;

  string s = "";
  while(n > 0) {
    int digit = n % 10;
    n /= 10;

    s = char(digit + '0') + s;
  }

  cout << s;

  return 0;
}