#include <iostream>
using namespace std;


// abb

bool isPalindrome(string s) {
  for(int i = 0; i < s.size() / 2; i++) {
    if(s[i] != s[s.size() - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;

  bool palindrome = isPalindrome(s);

  if(!palindrome) {
    palindrome = isPalindrome(s + s[0]);
  }

  palindrome ? cout << "YES" : cout << "NO";

  return 0;
}