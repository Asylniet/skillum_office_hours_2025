#include <iostream>

using namespace std;

int main() {
  string s = "12312312312+4561321321";
  int plusIndex = s.find('+');

  string firstPart = s.substr(0, plusIndex);
  string secondPart = s.substr(plusIndex + 1);

  cout << firstPart << " " << secondPart;
  return 0;
}