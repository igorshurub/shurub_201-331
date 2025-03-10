﻿// Shurub_Igor_201_331_lb6_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <queue>
using namespace std;
int min(int k2, int k3, int k5) 
{
    if (k2 < k3 && k2 < k5)
        return k2;
    else if (k3 < k5)
        return k3;
    else
        return k5;
}
int main()
{
    queue <int> q2, q3, q5;
    int n;
    cout << "input number\n";
    cin >> n;
    int k=1 ;
    for (int i = 0; i < n; i++)
    {
        q2.push(k * 2);
        q3.push(k * 3);
        q5.push(k * 5);
        k = min(q2.front(), q3.front(), q5.front());
        cout << k << ' ';
        if (q2.front() == k)
            q2.pop();
        if (q3.front() == k)
            q3.pop();
        if (q5.front() == k)
            q5.pop();
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
