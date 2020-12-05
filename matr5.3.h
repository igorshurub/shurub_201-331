
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
	//������������ 5.1
	bool input();// ��������� ����������� ��������� ����� ����
	void print();
	double get_elem(int i, int j);
	//void set_elem(int i, int j, bool num) { return elems[i * cols + j]; };
	bool sum(const matr* matr2);
	bool mult(const matr* mat2);
	void mult_by_num();
	double trace();
	//������������ 5.2
	matr(int i, int j);// ���������� ������������ �� ���������
	matr(int i, int j, const double* arr);//���������������� �����������
	matr sum(const double* arr);//���������� �����
	matr mult(const double* arr);//���������� ���������
	void input(int i, int j);//���������� �����
	void input(int i, int j, double* arr);//���������� ����� � ��������� ��������
	//������������ 5.3
	matr(const matr& copy);
	friend matr operator+ (const matr& lhs, const matr& rhs);
	friend std::istream& operator<<(std::istream& in, const matr& matr_print);
	friend std::ostream & operator<<(std::ostream& out, const matr & matr_print);
	friend matr operator- (const matr& lhs, const matr& rhs);
	friend matr operator* (const matr& lhs, const matr& rhs);
	friend matr operator*(const matr& lhs, double m);
	matr operator-();
};

