// Shurub_Igor_201_331_lb6_.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <deque>
#include <string>
//#include <vector>
//#include <algorithm> 
using namespace std;

bool check_polindrom(string & a)
{
	deque <char>dequeInt;
	for (int i = 0; i < a.length(); i++)
		dequeInt.push_back(a[i]);
	for (int i = 0; i < dequeInt.size()/2; i++)
		if (dequeInt.front() != dequeInt.back())
		{
			return false;
			dequeInt.pop_front();
			dequeInt.pop_back();
			
		}
	return true;
}
int main()
{
	string a;
	cout << "input sentense\n";
	cin >> a;
	if (check_polindrom(a))
		cout << "yes it is palindrom";
	
	else
		cout << "no it is not polindrom";
	
	cout << endl;
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
