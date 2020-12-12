#include <iostream>
#include "matr.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	matr matrA;
	/*cout << "Введите матрицу A "<< endl;
	matrA.input();
	cout << "Введите матрицу B " << endl;
	matrB.input();
	cout << "A=\n";
	matrA.print();
	cout << "B=\n";
	matrB.print();
	cout << "Cумма матриц " << endl;
	matrA.sum(&matrB);
	cout << "A=A+B; A=\n";
	matrA.print();
	matrB.input();
	cout << "Произдведение матриц " << endl;
	matrA.mult(&matrB);
	cout << "A=A*B; A=\n";
	matrA.print();
	cout << "Матрица на число " << endl;
	matrA.mult_by_num();
	cout << "A=A*num; A=\n";
	matrA.print();
	cout << "Введите матрицу A " << endl;
	matrA.input();
	cout << "A=\n";
	matrA.print();
	cout << "Сумма диагональных элементов матрицы " << endl;
	matrA.trace();
	//lab 5.2
	double temp[12] = { 0,7,6,5,4,4,3,5,6,7,6,5 };
	cout << "Введите матрицу A " << endl;
	matrA.input(3, 4);
	cout << "A=\n";
	matrA.print();
	matrB.input(3, 4, temp);
	cout << "B=\n";
	matrB.print();
	cout << "Cумма матриц " << endl;
	matrA.sum(temp);
	matrA.print();
	*/
	//lab 5.3
	double temp[12] = { 0,7,6,5,4,4,3,5,6,7,6,5 };
	double temp2[12] = { 1,4,6,7,8,5,3,2,1,4,5,1 };
	matr matrB(3, 4, temp);
	matr C(3, 4, temp2);
	cout << "C=\n";
	cout << C;
	cout << "B=\n";
	cout << matrB;
	cout << "Cумма матриц " << endl;
	cout << C + matrB;
	cout << "Разность матриц " << endl;
	cout << C - matrB;
	matr D(4, 3, temp2);
	cout << "D=\n";
	cout << D;
	cout << "Произведение матриц " << endl;
	cout << D * matrB;
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
