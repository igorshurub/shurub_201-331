﻿// Shurub_Igor_lb7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
template <typename SomeType>

void quick_sort(SomeType* arr, int n) {
	SomeType m = arr[0];
	int l = 0, r = n - 1;
	while (l < r) {
		while (l < r && arr[r] >= m) {
			r--;
		}
		if (l != r) {
			arr[l] = arr[r];
			l++;
		}
		while (l < r && arr[l] <= m) {
			l++;
		}
		if (l != r) {
			arr[r] = arr[l];
			r--;
		}
	}
	arr[l] = m;
	if (0 < l) {
		quick_sort(arr, l);
	}
	if (l < n - 1) {
		quick_sort(arr + l + 1, n - l - 1);
	}
}
int main() {
	pair<string, int> arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	quick_sort(arr, 5);
	cout << "Sort:\n";
	for (int i = 0; i < 5; i++) {		
		cout << arr[i].first << "   " << arr[i].second << endl;
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
