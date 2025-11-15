#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  // v.pop_back();

  v.insert(v.end() - 1, 10);

  // v.erase(find(v.begin(), v.end(), 2));
  v.erase(v.end() - 1);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}