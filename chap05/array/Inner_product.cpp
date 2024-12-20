#include <algorithm>
#include <iostream>
#include <functional>
#include <numeric>
using namespace std;

int main()
{
  const int N = 5;
  int x1[N], x2[N];

  for (int i = 0; i < N; ++i) {
    x1[i] = i + 1;
    x2[i] = i + 2;
  }
  
  // compute "inner product," with roles of + and * reversed:
  int result = inner_product(&x1[0], &x1[N], &x2[0], 1,multiplies<int>(), plus<int>());

  cout << "Inner product with roles of + and * reversed: " << result << endl;

  return 0;
}

/* 
Inner product with roles of + and * reversed: 10395
 */        
