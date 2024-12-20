// Using the STL generic reverse algorithm with an array
#include <iostream>
#include <string>
#include <cassert> 
#include <algorithm> // For reverse algorithm
using namespace std;

int main()
{
  char array1[] = "abc";
  int N1 = strlen(array1);
  reverse(&array1[0], &array1[N1]);
  assert (string(array1) == "cba");
  return 0;
}
