#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main( ) {
  string arrStr[5] = {"A", "B", "C", "D", "E"};
  
  for (string* p = &arrStr[0]; p != &arrStr[5]; ++p) {
    cout << *p << ' ';
  }
  cout << endl;
}
