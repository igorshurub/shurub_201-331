// Shurub_Igor_lab4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string file_format(const string file_path_full) {
    return file_path_full.substr(file_path_full.rfind(".") + 1, file_path_full.size());
}
string file_name(const string file_path_full) {
    return file_path_full.substr(file_path_full.rfind("\\") + 1, file_path_full.size());
}
string file_path(const string file_path_full) {
    return file_path_full.substr(0,file_path_full.rfind("\\") -1);
}
string file_disk(const string file_path_full) {
    return file_path_full.substr(0,file_path_full.rfind(":"));
}
 void file_rename(string file_path_full, const string new_name){
        file_path_full = file_path(file_path_full) + new_name + "\\" + file_format(file_path_full);
    }

int main()
{
    setlocale(LC_ALL, "Rus");
    fstream fs;
    fs.open("C:\\lb4_2\\Some.txt.file.txt", fstream::in | fstream::out | fstream::app);
        fs << 1234567 << endl;
    fs.close();
    int ch = 0;
    while (true) {
        cout << "что вы хотите?\n";
        cout << "1.расширение файла\n";
        cout << "2.название файла\n";
        cout << "3.расположение файла\n";
        cout << "4.название диска \n";
        cout << "5.переименовка файла\n";
        cout << "6.копия файла\n";
        cout << "7.выход\n";
        cin >> ch;
        switch (ch) {
        case 1:{
            string path;
            cout << "Введите полный путь до файла: ";
            cin >> path;
            cout  << file_format(path) << endl;
          break;
        }
        case 2:
        {
            string path;
            cout << "Введите полный путь до файла: ";
            cin >> path;
            cout  << file_name(path) << endl;
            break; 
        }
        case 3:
        {
            string path;
            cout << "Введите полный путь до файла: ";
            cin >> path;
            cout << file_path(path) << endl;
            break;  
        }
        case 4:
        { 
            string path;
            cout << "Введите полный путь до файла: ";
            cin >> path;
            cout << file_disk(path) << endl;
            break; 
        }
        case 5:
        {  
            string path;
            cout << "Введите полный путь до файла: ";
            cin >> path;
            string new_name;
            cout << "Введите новое имя файла: ";
            cin >> new_name;
            file_rename(path, new_name);
            cout << path << endl;
            break;
           
        }
        case 6:
        {
            break;
        }
        case 7:
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
