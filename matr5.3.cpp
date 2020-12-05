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
	elems = new double[rows * cols];
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
	if (cols != matr2->rows)
		return false;
	matr res;
	res.cols = matr2->cols;
	res.rows = rows;
	res.elems = new double[res.cols * res.rows]{ 0 };

	for (int i = 0; i < res.rows; i++)
	{
		for (int j = 0; j < res.cols; j++)
		{
			for (int k = 0; k < this->cols; k++) {
				res.elems[i * res.cols + j] += this->elems[i * cols + k] * matr2->elems[k * matr2->cols + j];
			}
		}
	}
	this->cols = res.cols;
	this->rows = res.rows;
	for (int i = 0; i < cols * rows; i++)
	{
		this->elems[i] = res.elems[i];
	}
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
	double sum = 0;
	if (cols == rows)
	{
		for (int i = 0; i < rows; i++)
			sum += get_elem(i, i);
		cout << "Сумма диагональных элементов: " << sum << endl;
	}

	else
		cout << "Неправильно задана матрица,она должна быть квадратной" << endl;
	return 0;
}
double matr::get_elem(int i, int j)
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
matr::matr(int i, int j)
{
	rows = i;
	cols = j;
	elems = new double[rows * cols];
}
matr::matr(int i, int j, const double* arr)
{
	rows = i;
	cols = j;
	elems = new double[rows * cols];
	for (int i = 0; i < cols * rows; i++)
		elems[i] = arr[i];
}
matr matr::sum(const double* arr)
{
	double* res;
	res = new double[rows * cols]{ 0 };
	for (int i = 0; i < rows * cols; i++)
		elems[i] += arr[i];
	return matr(rows, cols, res);
}
matr matr::mult(const double* arr)
{
	double* res;
	res = new double[rows * cols]{ 0 };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < this->cols; k++) {
				elems[i * cols + j] += this->elems[i * cols + k] * this->elems[k * this->cols + j];
			}
		}
	}
	this->cols = cols;
	this->rows = rows;
	for (int i = 0; i < cols * rows; i++)
	{
		this->elems[i] = elems[i];
	}
	return matr(rows, cols, res);
}
void matr::input(int i, int j)
{

	rows = i;
	cols = j;
	if (elems != nullptr)
		delete[] elems;
	elems = new double[rows * cols];
	for (int i = 0; i < rows * cols; i++)
		cin >> elems[i];

}

void matr::input(int i, int j, double* arr)
{
	rows = i;
	cols = j;
	if (elems != nullptr)
		delete[] elems;
	elems = new double[rows * cols];
	for (int i = 0; i < cols * rows; i++)
		elems[i] = arr[i];
}

matr::matr(const matr& copy)
{
	cols = copy.cols;
	rows = copy.rows;
	elems = new double[cols * rows];
	for (int i = 0; i < cols * rows; i++)
		elems[i] = copy.elems[i];
}

matr matr::operator-()
{
	for (int i = 0; i < cols * rows; i++)
		elems[i] = -elems[i];
	return *this;
}

matr operator+(const matr& lhs,const matr &rhs)
{
	matr res(lhs);
	if (lhs.cols==rhs.cols && lhs.rows == rhs.rows)
	{
		for (int i = 0; i < lhs.cols * lhs.rows; i++)
			res.elems[i] = lhs.elems[i] + rhs.elems[i];
	}
	return res ;
}

std::ostream& operator<<(std::ostream& out, const matr& matr_print)
{
	for (int i = 0; i < matr_print.rows; i++)
	{
		for (int j = 0; j < matr_print.cols; j++)
			out << matr_print.elems[i * matr_print.cols + j] << "\t";
		out << endl;
	}
	return out;
}
std::istream& operator<<(std::istream& in, const matr& matr_print)
{
	for (int i = 0; i < matr_print.rows; i++)
	{
		for (int j = 0; j < matr_print.cols; j++)
			in >> matr_print.elems[i * matr_print.cols + j];
	}
	return in;
}
matr operator-(const matr& lhs, const matr& rhs)
{
	matr res(lhs);
	if (lhs.cols == rhs.cols && lhs.rows == rhs.rows)
	{
		for (int i = 0; i < lhs.cols * lhs.rows; i++)
			res.elems[i] = lhs.elems[i] - rhs.elems[i];
	}
	return res;
}

matr operator*(const matr& lhs, const matr& rhs)
{
	matr res(lhs);
	if (lhs.cols == rhs.cols && lhs.rows == rhs.rows)
	{
		for (int i = 0; i < lhs.cols * lhs.rows; i++)
			res.elems[i] = lhs.elems[i] * rhs.elems[i];
	}
	return res;
	
}

matr operator*(const matr& lhs, double m)
{
	matr res(lhs);
	for (int i = 0; i < lhs.cols * lhs.rows; i++)
		res.elems[i] = lhs.elems[i] * m;
	return res;
}
