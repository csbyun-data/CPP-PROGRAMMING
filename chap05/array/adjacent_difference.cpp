// Illustrating the generic adjacent_difference algorithm
#include <iostream>
#include <cassert>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
  const int N = 20;
  int x1[N], x2[N];
  for (int i = 0; i < N; ++i)
    x1[i] = i;

  // Compute the partial sums of 0, 1, 2, 3, ..., N - 1, putting the result inx2:
  partial_sum(&x1[0], &x1[N], &x2[0]);

  // Compute the adjacent differences of elements in x2, placing the result back in x2:
  adjacent_difference(&x2[0], &x2[N], &x2[0]);

  for (int i = 0; i < N; ++i)
      cout << x2[i] << "  ";
  return 0;
}

/* 
0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  
 */
