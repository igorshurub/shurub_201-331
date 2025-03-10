﻿// Shurub_Igor_201-331_lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
void task1() {
    int arr[1000]; 
    int n;
    cout << "Введите кол-во числ в массиве " << endl;
    cin >> n;
    int b;
    cout << "Введите  числа для заполнения массива: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // считываем элементы в массив
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j + 1]) {
                b = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = b; 
            }
        }
    }

    cout << "Массив в отсортированном виде: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // выводим элементы массива
    }
    cout << endl;
}

void count_sort(char* abc, int n) {
    const int ALF = 26;
    int mas[ALF] = { 0 };
    int base = 'a';
    int j;
    for (int i = 0; i < n; ++i) {
        j = abc[i] - base;
        mas[j]++;
    }
    int k = 0;
    for (j = 0; j <ALF; j++) {
        for (int i = 0; i < mas[j]; i++) {
            abc[k] = j + base;
            ++k;
        }
    }
}

void task2()
{
    char abc[1000];
    int n;
    cout << "Введите кол-во симолов в массиве " << endl;
    cin >> n;
    cout << "Введите  числа для заполнения массива: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> abc[i]; // считываем элементы в массив
    }
    count_sort(abc, n);
    cout << "обработанный массив" << endl;
    for (int i = 0; i < n; i++) {
        cout << abc[i];
    }
    cout << endl;
}
    
    int main() {
    setlocale(0, "");

    int choice = 0;
    while (true)
    {
        cout << "что вы хотите сделать ?\n";
        cout << "1.Сортировка пузырьком \n";
        cout << "2.Сортировка подсчётом\n";
        cout << "3.Выход\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            task1();
            break;
        }
        case 2:
        {
            task2();
            break;
        }
        case 3:
            return 0;
        default:
            break;
            {
                return 0;
            }

        }
    }
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
