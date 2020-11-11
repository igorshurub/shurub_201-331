// Shurub_igor_201_331_lb4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void task1(int*arr, int size) {
    for (int i=0; i < size; i++) {
       cin >> arr[i];
    }
}
void task2(int*arr,int size) {
   
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void task4(int*arr,int size) {
    int b;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] % 10 > arr[j + 1] % 10) {
                b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
            
            else if ((arr[j] % 10 == arr[j + 1] % 10) && (arr[j] < arr[j + 1])){
                b = arr[j+1];
                arr[j+1] = arr[j ];
                arr[j ] = b;
            }
            
        }

    }
    cout << "вывод массива" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "rus");
    int choise = 0;
    int size;
    cout << "Введите кол-во элементов в массиве" << endl;
    cin >> size;
    int* arr = new int[size];
    while (true)
    {
        cout << "что вы хотите?\n";
        cout << "1.ввода массива\n";
        cout << "2.вывод массива\n";
        cout << "3.сортировка по сууме цифр на четных местах\n";
        cout << "4. сортировать по возрастанию последней цифры\n";
        cout << "5.выход\n";
        cin >> choise;
        switch (choise) {
        case 1: {
            cout << "Введите элементы массива" << endl;
            task1(arr,size);
            break;
        }

        case 2: {
            cout << "вывод массива" << endl;
            task2(arr,size);
            break;
        }
        
        case 4: {
            cout << "Cортировка по возрастанию последней цифры";
            task4(arr,size);
            break;
        }
        case 5:
            delete[] arr;
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
