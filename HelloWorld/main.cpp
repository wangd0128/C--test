#include <iostream>
#include "List.cpp"
#include "TestCapacity.cpp"

using namespace std;


int main() {
	int arr[11] = { 1, 2, 34, 4 };
	int arrSize = sizeof(arr);
	int arr_test[1] = {};

	cout << "Len : " << sizeof(arr) / sizeof(arr[0]) << std::endl;
	cout << "void* : " << sizeof(void*) << std::endl;
	cout << "arr_test : " << sizeof(arr_test) << std::endl;
	List<int> list;
	cout << "List<int> : " << sizeof(List<int>) << std::endl;
	cout << "list : " << sizeof(list) << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		list.Add(100 - i);
		cout << "count = " << list.Count() << "  " << sizeof(list) << endl;
	}

	TestCapacity testCapacity;
	cout << "TestCapacity : " << sizeof(testCapacity) << std::endl;

	system("pause");
	return 0;
}

