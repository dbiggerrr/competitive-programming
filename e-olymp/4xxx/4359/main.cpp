#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  multiset<long long> s;
  for (int i = 0; i < n; i++) {
    long long v;
    cin >> v;
    s.insert(v);
  }

  while (s.size() > 1) {
    multiset<long long>::iterator i1 = s.begin(), i2 = s.begin();
    ++i2;
    long long v1 = *i1, v2 = *i2;
    s.erase(i1);
    s.erase(i2);
    s.insert(max(2 * v1, v2));
  }

  cout << *s.begin() << endl;

  return 0;
}
