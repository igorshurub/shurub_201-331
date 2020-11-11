// Shurub_Igor_201-331.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;



void task1() {
    {
            int i, j, k;
            cin >> i;
            for (j = 0; j <= i; j++) {
                for (k = 1; k <= j; k++) {
                    cout << k;
                }
                cout << endl;
            }
        }
    }
double fact(int x) {
    double fact = 1;
    while (x) {
        fact *= x;
        --x;

    }
    return fact;
}


void task2() {
    int num;
    cout << "Введите число";
    cin >> num;
    for (int i = 0; i <= num; i++) {
        for (int k = 0; k <= i; k++) {
            cout << fact(i) / (fact(k) * fact(i - k)) << " ";
        }
        cout << endl;
    }

    
}

void task3() {
    int w = 0;
    float sum = 0, kol = 0;
    string num;
    cout << "Точка-стоп" << endl;
    cout << "Введите числа:" << endl;
    
    while (w == 0) {
        cin >> num;
        if (num == ".") {
            w++;
        }
        else {
            sum = sum + atoi(num.c_str());
            kol++;
        }
    }
    cout << sum / kol << endl;
}
int main() {
    setlocale(0, "");

    int choice = 0;
    while (true)
  
    {
        cout << "что вы хотите сделать ?\n";
        cout << "1.задание1\n";
        cout << "2.задание2\n";
        cout << "3.задание3\n";
        cout << "4.выход\n";
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
        {
            task3();
        break;
        }
        
        case 4: 
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
