#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int arr[] = { 10, 20, 30};
	int brr[] = { 40, 50, 60};
	
	const int* const ptr = &a;     // 변수의 address 표현 
	const int* const arr_ptr = arr;  // 배열의 address 표현
	
	*ptr = 80; // Ok
	ptr = &b;  // Error
	
	*arr_ptr = 40; // Ok
	arr_ptr = brr;  // Error
	
	return 0;
}
