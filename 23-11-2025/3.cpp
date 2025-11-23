#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  for(int i = 1; i <= n; i++) {
    mp[i] = i * 2;
  }
  
  for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}