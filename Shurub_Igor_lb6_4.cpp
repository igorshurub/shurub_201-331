﻿// Shurub_Igor_lb6_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
int main()
{
	setlocale(0, "");
	set<string> login;
	vector <string> res;
	int n;
	string log, point;
	cout << "Input namber people in  class\n";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> log;
		cin >> point;
		login.insert(log);
		res.push_back(log + point);
	}
	cout << "Список учеников, выполнневших работу 1 раз,которым стоит зачесть работу\n";
	copy(login.begin(), login.end(), ostream_iterator<string>(cout, "\n"));
	cout << "Список учеников, и баллы\n";
	for (int i = 0; i < n; i++)
		cout << res[i] << endl;
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
