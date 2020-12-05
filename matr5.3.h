
#pragma once
#include<iostream>
#include<fstream>

class matr
{
private:
	int cols;
	int rows;
	double* elems;
public:
	matr();
	~matr();
	//Лаобраторная 5.1
	bool input();// заготовим возможность считывать через файл
	void print();
	double get_elem(int i, int j);
	//void set_elem(int i, int j, bool num) { return elems[i * cols + j]; };
	bool sum(const matr* matr2);
	bool mult(const matr* mat2);
	void mult_by_num();
	double trace();
	//Лаобраторная 5.2
	matr(int i, int j);// перегрузка конструктора по умолчанию
	matr(int i, int j, const double* arr);//инициализирующий конструктор
	matr sum(const double* arr);//перегрузка суммы
	matr mult(const double* arr);//перегрузка умножения
	void input(int i, int j);//перегрузка ввода
	void input(int i, int j, double* arr);//перегрузка ввода и заполения массивом
	//Лаобраторная 5.3
	matr(const matr& copy);
	friend matr operator+ (const matr& lhs, const matr& rhs);
	friend std::istream& operator<<(std::istream& in, const matr& matr_print);
	friend std::ostream & operator<<(std::ostream& out, const matr & matr_print);
	friend matr operator- (const matr& lhs, const matr& rhs);
	friend matr operator* (const matr& lhs, const matr& rhs);
	friend matr operator*(const matr& lhs, double m);
	matr operator-();
};

