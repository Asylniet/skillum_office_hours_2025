#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int x;
  vector<int> v;
  map<int, int> mp;

  int max;

  while(cin >> x) {
    if(v.empty()) max = x;

    v.push_back(x);
    mp[x]++;

    if(mp[x] > mp[max]) {
      max = x;
    }

    if(cin.peek() == '\n') break;
  }

  cout << max;

  // for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
  //   cout << it->first << " - " << it->second << endl;
  // }

  return 0;
}