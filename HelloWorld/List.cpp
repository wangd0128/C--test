#include <iostream>

template <typename T>
class List {

private:
	int capacity;
	int count;
	T* arr;

public:
	List() : capacity(10), count(0) {
		arr = new T[capacity];
	}
	~List() {
		delete[] arr;
	}


private:
	void Resize() {
		capacity = capacity * 2;
		T* new_arr = new T[capacity];
		for (size_t i = 0; i < count; i++)
		{
			new_arr[i] = arr[i];
		}
		delete[] arr;
		arr = new_arr;
	}

public:
	void Add(T item) {
		if (count >= capacity)
		{
			Resize();
		}
		arr[count] = item;
		count++;
	}

	int Count() {
		return count;
	}


};
