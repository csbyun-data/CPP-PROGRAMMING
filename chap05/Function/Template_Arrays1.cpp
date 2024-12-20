// Computing sum with template arrays for double array
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

template <typename Array>
double vectorSum(Array a, long count) { // Array can be a pointer or an iterator
  double sum = 0.0;
  for (long i = 0; i<count; ++i)
    sum += a[i];
  return sum;
}

int main() {
  double temperature[] = { 10.5, 20.0, 8.5 };

  cout << "array vectorSum = "
       << vectorSum(temperature, sizeof temperature/sizeof temperature[0])
       << endl;

  return 0;
}

/* 
array vectorSum = 39
 */    
