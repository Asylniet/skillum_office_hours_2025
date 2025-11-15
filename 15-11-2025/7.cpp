#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string s = "123";

  int result = 0;
  for(int i = 0; i < s.size(); i++) {
    int digit = int(s[i]) - '0';
    result += digit * pow(10, s.size() - 1 - i);
  }
  
  cout << result;

  return 0;
}