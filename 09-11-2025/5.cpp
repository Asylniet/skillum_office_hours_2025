#include <iostream>

using namespace std;

int main() {
  string MAIL_PATTERN = "@gmail.com";

  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    string mail;
    cin >> mail;

    int delimeterIndex = mail.find('@');
    string end = mail.substr(delimeterIndex);
    if(end == MAIL_PATTERN) cout << mail.substr(0, delimeterIndex);
  }
  return 0;
}