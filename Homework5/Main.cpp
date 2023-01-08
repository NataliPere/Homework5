#include <iostream>
#include "MyClass.h"

int main() {
	setlocale(LC_ALL, "Russian");

	//1 ������
	//1-� ������: Source Files -> Add -> class -> ������ �������� ������ (�������� ����� .h � .cpp) -> OK
	//2-� ������: �������:
	class Names {
	public:
		Names(){}
	//2 ������
	//������� ��������� �����������:
		Names() = delete;
	private:
	};

	//3 ������
	//���������� � ����������� ��� operator[] ��� ������� � ��������� ���� std::string �� �������

	std::string str = "Hello, ";
	str.operator+=("world");
	operator<<(operator<<(std::cout, str), '\n');

	//4 ������
	//���������� � ����������� ��� ������ ������������ ������
	class MyClass {
		int x;
	public:
		void print() const {
			std::cout << "x==" << x << "\n";
		}
	};

	return 0;
}

	//5 ������
int main(int num, int* arr[]) {
	MyClass arr(10);
	return 0;
}