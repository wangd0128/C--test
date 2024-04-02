#include <iostream>
using namespace std;
#define GET_DYNAMIC_ARRAY_LEN(array, len) {len =_msize(array);}

int main() {

	int* a = new int[0] {};

	cout << &a << endl;
	
	cout << &a[0] << endl;

	cout << &a[1] << endl;

	int len;

	GET_DYNAMIC_ARRAY_LEN(a, len);

	cout << len << endl;

	system("pause");

	return 0;

}