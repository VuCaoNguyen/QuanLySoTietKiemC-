#include "SoCoKyHan.h"
using namespace std;


istream& operator >>(istream &is, SoCoKyHan & x)
{
	//Gọi lai operator nhập của cha
	SoTietKiem *Cha = static_cast<SoTietKiem*>(&x);
	is >> *Cha;

	do
	{
		cout << "\nNhap  vao ky han gui: ";
		is >> x.KyHanGui;

		if (x.KyHanGui <= 0)
		{
			cout << "\nKy han gui khong hop le hay nhap lai!";
		}

	} while (x.KyHanGui <= 0);
	return  is;
}

ostream & operator <<(ostream &os, SoCoKyHan x)
{
	SoTietKiem Cha = static_cast<SoTietKiem>(x);
	os << Cha;

	os << "\nKy han gui : " << x.KyHanGui;

	return  os;
}
float SoCoKyHan::TinhTienLai()
{
	
	if (n < KyHanGui)
	{
		return  0;
	}
	return (n * LaiSuat * SoTienGui )/ 100;
} 

SoCoKyHan::SoCoKyHan()
{
}


SoCoKyHan::~SoCoKyHan()
{
}
