// Computing sum with template arrays for vector
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
  vector<int> sunny;
  sunny.push_back(7);  
  sunny.push_back(12);  
  sunny.push_back(15);
  cout << sunny.size() << " months on record" << endl; 
  cout << "vectorSum number of sunny days: "; 
  cout << vectorSum(sunny.begin(), sunny.end() - sunny.begin()) << endl;

  return 0;
}

/* 
3 months on record
vectorSum number of sunny days: 34
 */  
