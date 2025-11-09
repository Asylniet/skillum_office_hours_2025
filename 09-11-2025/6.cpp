#include <iostream>
#include <map>

using namespace std;

int main() {
  // "ONE TWO THR+FOUFIVSIX"
  // if(s == "ONE") {
  //   digit = 1;
  // } else if(s == "TWO") {
  //   digit = 2;
  // }
  map<int, string> mp;
  mp["ONE"] = 1;
  mp["TWO"] = 2;
  mp["THR"] = 3;

  string s;
  cin >> s;
  cout << mp[s];

  return 0;
}