#include <iostream>//#лрє1 Ўуруб »горь группа 201-331
#include <bitset>
using namespace std;

int main() {
    cout << "Igor Shurub 201-331" << endl; // задание 1
    cout << "min=-2^31=-2147483648" << endl; // задание 2 -минимальное число(из книги)
    cout << "max=2^31=2147483648" << endl; // задание 2 -максимальное число(из книги)
    int n;// 3 задание, вводим переменную
    cin >> n;
    cout << bitset <16>(n) << endl;// 3 задание в бинарном виде
    cout << hex <<n << endl;// 3 задание в 16 виде
    cout <<bool (n) << endl; // 3 задание
    cout << double(n) << endl;// 3 задание
    cout << char(n) << endl;// 3 задание
    int a, x, b;//объ€вление переменных задание 4
    cin >> a >> b;// ввод переменных задание 4
    x = b / a;// вычисление переменной x
    cout << x << endl;// вывод переменной x- резлуьтат задани€ 4
    int begin, end, middle;// объ€вление переменных задание 5
    cin >> begin >> end;// ввод переменных задание 5
    middle = (begin + end) / 2;// нахождение середины отрезка
    cout << middle;//результат задани€ 5

    return 0;

}
