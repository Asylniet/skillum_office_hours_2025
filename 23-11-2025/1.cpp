#include <iostream>
#include <vector>

using namespace std;

int sortingFunc(pair<int, int> a, pair<int, int> b) {
  return a.second > b.second;
}

int main(){
  int n;
  cin >> n;
  vector<pair<int, int> > v;

  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    pair<int, int> p;
    p.first = a + b;
    p.second = i + 1;
    v.push_back(p);
  }

  sort(v.begin(), v.end(), sortingFunc);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i].first << " ";
  }

  return 0;
}