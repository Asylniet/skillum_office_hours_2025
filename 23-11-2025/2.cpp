#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    string name;
    cin >> name;

    int occurance = mp[name]++;

    if(occurance > 1) {
      cout << "This user already exists";
    } else {
      cout << "New user";
    }
  }

  return 0;
}