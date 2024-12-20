// Use random_shuffle algorithms with array
#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>  
using namespace std;

int main() {

  int a[100];
  int i;
  for (i = 0; i < 100; ++i) 
    a[i] = i;

  random_shuffle(&a[0], &a[100]);

  for (i = 0; i < 100; ++i) 
    cout <<  a[i] << " ";

 
  return 0;
}

/* 
12 1 9 98 96 27 58 82 86 90 18 62 32 40 71 51 91 41 94 17 8 47 64 66 65 7 6 76 5
 99 77 81 54 35 56 39 25 3 87 16 61 68 14 13 24 55 97 19 20 59 75 33 21 28 78 15
 50 34 36 44 83 38 46 60 84 95 57 22 37 23 70 89 31 79 73 92 11 2 88 42 30 52 72
 53 67 29 85 43 74 69 45 26 93 10 48 80 0 63 49 4 "
 */    
