#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {10, 10, 20, 10, 1, 3, 1};
  set<int> st;

  for(int i = 0; i < v.size(); i++) {
    st.insert(v[i]);
  }

  cout << v.size() - st.size();

  // for(set<int>::iterator it = st.begin(); it != st.end(); it++) {
  //   cout << *it << endl;
  // }

  return 0;
}