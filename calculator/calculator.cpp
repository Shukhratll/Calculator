#include <iostream>
using namespace std;

//Калькулятор

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, selection; //Переменные
	cout << "Введите 2 числа" << endl;
	cin >> a >> b; //Ввод

	//Меню
	cout <<
		"Выберите математическую операцию:" << endl <<
		"1. Сложение" << endl <<
		"2. Вычитание" << endl <<
		"3. Умножение" << endl <<
		"4. Деление" << endl;

	cout << "Выбрать операцию ";
	cin >> selection;

	//Мат.операции
	switch (selection)
	{
	case 1:
		cout << "Результат сложения = " << a + b << endl; //Сложения
		break;
	case 2:
		cout << "Результат вычитания = " << a - b << endl; //Вычитания
		break;
	case 3:
		cout << "Результат умножения = " << a * b << endl; //Умножения
		break;
	case 4:
		cout << "Результат деления = " << (float)a / b << endl; //Деления
		break;


	default:
		cout << "Ошибка ! Пункт меню отсутствует" << endl; //В случае ошибки
		break;

	}
}