#include <iostream>

using namespace std;

int main() {
  string s = "Hello, again";
  int commaIndex = s.find(',');

  s.insert(5, " world");

  cout << s;
  return 0;
}