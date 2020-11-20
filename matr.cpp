#include "matr.h"
#include <iostream>
using namespace std;
matr::matr()
{
	cols = 0;
	rows = 0;
	elems = nullptr;
}
matr::~matr()
{
	if (elems != nullptr)
		delete[] elems;
}

bool matr::input()
{
	cout << "Input number of rows:";
	cin >> rows;
	cout << "Input number of columns:";
	cin >> cols;
	if (elems != nullptr)
		delete[] elems;
	elems = new bool[rows * cols];
	for (int i = 0; i < rows * cols; i++)
		cin >> elems[i];
		//elems[i] = i * 37 % 3;
	return true;
}

bool matr::sum(const matr* matr2)
{
	if (rows != matr2->rows || cols != matr2->cols)
		return false;
	for (int i = 0; i < rows * cols; i++)
		elems[i] += matr2->elems[i];//чтобы сделать по модулю 2 добавить bool(int(.....))
	return true;
	
}
bool matr::mult(const matr* matr2)
{
	if (rows != matr2->rows || cols != matr2->cols)
		return false;
	for (int i = 0; i < rows * cols; i++)
		elems[i] *= matr2->elems[i];
	return true;
}
void matr::mult_by_num()
{
	double num;
	cout << "Input number:";
	cin >> num;
	for (int i = 0; i < rows * cols; i++)
		elems[i] *= num;
	
}
double matr::trace()
{
	setlocale(LC_ALL, "RUS");
	int sum = 0;
	for (int i = 0; i < rows * cols; i++)
	sum += elems[i]*elems[i];
	cout << "Сумма диагональных элементов" << endl;
	cout << sum << endl;
	return 0;
}
bool matr::get_elem(int i, int j)
{
	return elems[i * cols + j];
}
void matr::print()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << get_elem(i, j) << "\t";
		cout << endl;
	}
}

