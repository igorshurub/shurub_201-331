// Ы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>

using namespace std;

bool check_polindrom(char* str)
{
	int len = strlen(str);
	for (int i = 0; i < len/2; ++i)
	{
		if (str[i] != str[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

void task1(char  str[255])
{
	cin.getline(str, 255, ';');
	if (check_polindrom(str))
	{
		cout << "Это полидром";
	}
	else
	{
		cout << "Это не полидром";
	}
	printf(str);
	cout << endl;
}

void task3(char str[255]) {
	int k;
	cin >> str;
	cout << "Введите кол-во букв для сдвига : ";
	cin >> k;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'z') {
			str[i] = 'a';
		}
		else str[i]++;

		str[i] += k-1;
	}
cout << "Шифр: " ;
printf(str);
cout<< endl;
}

void task4(char  str[255]) {
	cin.getline(str, 255, ';');
	for (int i = 1; i < strlen(str); i++)
	{
		if (str[i] == (char)'\"')
		{
			i++;
			while (str[i] != (char)'\"')
			{
				cout << str[i];
				i++;
			}
			cout << " ";
		}
	}
	cout << endl;
}
int main()
	{
		setlocale(0, "");
		int ch = 0;
		char* str = new char[255];
		while (true) {
			cout << "что вы хотите сделать ?\n";
			cout << "1.Проверка на полидром\n";
			cout << "2.Задание 2\n";
			cout << "3.Шифр Цезаря\n";
			cout << "4.Все что в кавычках\n";
			cout << "5.Выход\n";
			
			cin >> ch;
			switch (ch)
			{
			case 1:
			{
				cout << "Введите строку ";
				task1(str);
				break;
			
			}
			case 3:
			{
				cout << "Введите строку ";
				task3(str);
				break;
				
			}
			case 4:
			{
				cout << "Введите строку ";
		        task4(str);
				break;
				
				
			}
			case 5:
				delete[] str;
				return 0;
			default:
				break;
			}
		}
		return 0;
	}
    





// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
