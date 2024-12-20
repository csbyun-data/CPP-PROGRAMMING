// Store objects in a map
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class Name {
  char str[40];
public:
  Name() {
     strcpy(str, "");
  }
  Name(char *s) {
     strcpy(str, s);
  }
  char *get() {
     return str;
  }
};

// Must define less than relative to Name objects.
bool operator<(Name a, Name b)
{
   return strcmp(a.get(), b.get()) < 0;
}

class Number {
  char str[80];
public:
  Number() {
     strcmp(str, "");
  }
  Number(char *s) {
     strcpy(str, s);
  }
  char *get() {
     return str;
  }
};

int main()
{
  map<Name, Number> directory;

  directory.insert(pair<Name, Number>(Name("T"),Number("555-4444")));
  directory.insert(pair<Name, Number>(Name("C"),Number("555-3333")));
  directory.insert(pair<Name, Number>(Name("J"),Number("555-2222")));
  directory.insert(pair<Name, Number>(Name("R"),Number("555-1111")));
  char str[80] = "T";
  map<Name, Number>::iterator p;

  p = directory.find(Name(str));
  if(p != directory.end())
    cout << "Phone number: " <<  p->second.get();
  else
    cout << "Name not in directory.\n";

  return 0;
}

/*
Phone number: 555-4444 
*/
