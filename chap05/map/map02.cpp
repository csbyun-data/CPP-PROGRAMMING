// Use string as the key and value in a map
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  map<string, string> directory;

  directory.insert(pair<string, string>("T", "555-4444"));
  directory.insert(pair<string, string>("C", "555-3333"));
  directory.insert(pair<string, string>("J", "555-2222"));
  directory.insert(pair<string, string>("R", "555-1111"));
  string s = "T";

  map<string, string>::iterator p;

  p = directory.find(s);
  if(p != directory.end())
    cout << "Phone number: " << p->second;
  else
    cout << "Name not in directory.\n";

  return 0;
}

// run result
Phone number: 555-4444  
