#include <iostream>

using namespace std;

// abc abcabcabc
// abc abc abc
// 012 345 678

int main() {
  string pattern;
  string s;
  cin >> pattern >> s;

  if(s.size() % pattern.size() != 0) {
    cout << "NO";
    return 0;
  }

  for(int i = 0; i < s.size() / pattern.size(); i++) {
    string part = s.substr(i * pattern.size(), pattern.size());
    if(part != pattern) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}