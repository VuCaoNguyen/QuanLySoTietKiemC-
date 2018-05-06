#pragma once
#include<iostream>
using namespace std;

class CNgay
{
private:
	int Ngay, Thang, Nam;

public:
	friend istream& operator >>(istream&, CNgay &);
	friend ostream& operator <<(ostream&, CNgay );

	int Getter_Ngay();
	void Setter_Ngay(int);

	int Getter_Thang();
	void Setter_Thang(int);

	int Getter_Nam();
	void Setter_Nam(int);

	bool   KiemTraNgay();
	CNgay();
	~CNgay();
};

