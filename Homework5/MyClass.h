#pragma once
class MyClass
{
public:
	MyClass(int SizeClass) {
		size = SizeClass;
		arr_of_class = new int[size];

	}
	~MyClass() {
		delete[] arr_of_class;
	}
private:
	int* arr_of_class;
	int size;
};

