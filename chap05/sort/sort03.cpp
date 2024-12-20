// Using reverse_copy to copy the array reversely
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int main() {

  int a[100], b[100];
  int i;
  for (i = 0; i < 100; ++i) 
    a[i] = i;

  reverse_copy(&a[0], &a[100], &b[0]);
 
  for (i = 0; i < 100; ++i) 
     cout << " a: "<< a[i] << "b: " <<  b[i] << " \n";

  return 0;
}
