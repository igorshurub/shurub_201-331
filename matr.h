#pragma once
#include<iostream>

class matr
{
private:
	int cols;
	int rows;
	bool* elems;
public:
	matr();
	~matr();

	bool input();// заготовим возможность считывать через файл
	void print();
	bool get_elem(int i, int j);
	//void set_elem(int i, int j, bool num) { return elems[i * cols + j]; };
	bool sum(const matr* matr2);
	bool mult(const matr* mat2);
	void mult_by_num();
	double trace();
	matr sum_tec(const matr* matr2);// результат суммы возвращается

};

