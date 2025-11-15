#include <iostream>

using namespace std;

int find(string s, char target, int start_position) {
  for(int i = start_position; i < s.size(); i++) {
    if(s[i] == target) return i;
  }

  return -1;
}

int main() {
  string s = "hello world";
  cout << s.find('l', 4);
  return 0;
}