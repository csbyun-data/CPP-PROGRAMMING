// Declare a char int map
#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<char, int> m;

  // put pairs into map
  for(int i=0; i<26; i++) {
    m.insert(pair<char, int>('A'+i, 65+i));
  }

  char ch = 'G';
  map<char, int>::iterator p;
  
  // find value given key
  p = m.find(ch);
  if(p != m.end()) 
    cout << "Its ASCII value is  " << p->second;
  else
    cout << "Key not in map.\n";

  return 0;
}

/*
Its ASCII value is  71
*/
