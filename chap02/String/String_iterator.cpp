#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string str1("Strings handling is easy in C++");
  string::iterator p;
  unsigned int i;

  p = str1.begin();
  while(p != str1.end()) 
    cout << *p++;
  cout << endl;

  return 0;
}

/*
Strings handling is easy in C++
*/
