#include <iostream>

using namespace std;
 
int main()
{
	setlocale(0, "Russian");
	int value;
	cout << "Введите число" << endl;
	cin >> value;

	cout << "Число " << value << " является " << (value % 2 == 0 ? "чётным" : "нечётным") << endl;
}
