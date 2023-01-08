#include <iostream>
#include "MyClass.h"

int main() {
	setlocale(LC_ALL, "Russian");

	//1 вопрос
	//1-й способ: Source Files -> Add -> class -> ¬вести название класса (создание файла .h и .cpp) -> OK
	//2-й способ: вручную:
	class Names {
	public:
		Names(){}
	//2 вопрос
	//”дал€ем дефолтный конструктор:
		Names() = delete;
	private:
	};

	//3 вопрос
	//ќбъ€вление и определение дл€ operator[] дл€ доступа к элементам пол€ std::string по индексу

	std::string str = "Hello, ";
	str.operator+=("world");
	operator<<(operator<<(std::cout, str), '\n');

	//4 вопрос
	//ќбъ€вление и определение дл€ любого константного метода
	class MyClass {
		int x;
	public:
		void print() const {
			std::cout << "x==" << x << "\n";
		}
	};

	return 0;
}

	//5 вопрос
int main(int num, int* arr[]) {
	MyClass arr(10);
	return 0;
}