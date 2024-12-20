// Use the generic partition algorithms: Partition array1, 
//putting numbers greater than 4 first, followed by those less than or equal to 4

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

bool above40(int n) { return (n > 4); }

int main()
{
  const int N = 7;
  int array0[N] = {5, 3, 1, 7, 6, 4, 2};
  int array1[N];

  copy(&array0[0], &array0[N], &array1[0]);

  ostream_iterator<int> out(cout, " ");

  cout << "Original sequence:                 ";
  copy(&array1[0], &array1[N], out); cout << endl;


  int* split = partition(&array1[0], &array1[N], above40);

  cout << "Result of (unstable) partitioning: ";
  copy(&array1[0], split, out); cout << "| ";
  copy(split, &array1[N], out); cout << endl;

  return 0;
}

/* 
Original sequence:                 5 3 1 7 6 4 2
Result of (unstable) partitioning: 5 6 7 | 1 3 4 2
 */       
