#include <iostream>

using namespace std;

int main() {
  string s1 = "Hello World";
  string s2 = "Hey Geeks";

  int spaceIndex = s1.find(' ');

  string s3 = s2.substr(4, 5);

  s1.replace(0, spaceIndex, s3);

  cout << s1;

  return 0;
}