#include <iostream>

using namespace std;

// 4
// Ponabity bonabety
// barbie barpee
// abcabc apcap
// abc apcd

int main() {
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    string first;
    string second;
    cin >> first >> second;
    
    if(first.size() != second.size()) {
      cout << "NO";
      continue;
    }
    
    bool isEqual = true;

    for(int j = 0; j < first.size(); j++) {
      char firstLetter = tolower(first[j]);
      char secondLetter = tolower(second[j]);

      if(firstLetter == secondLetter) continue;

      if((firstLetter == 'p' && secondLetter == 'b') || (firstLetter == 'b' && secondLetter == 'p')) continue;
      if((firstLetter == 'i' && secondLetter == 'e') || (firstLetter == 'e' && secondLetter == 'i')) continue;
      
      if(firstLetter != secondLetter) {
        isEqual = false;
        break;
      }
    }

    isEqual ? cout << "YES" : cout << "NO";
  }

  return 0;
}