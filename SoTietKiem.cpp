#include "SoTietKiem.h"
#include <ctime>

istream& operator >>(istream &is, SoTietKiem &x)
{
	//cout << "\nNhap vao CMND: ";
	//getline(is, x.CMND);

	cout << "\nNhap vao Ten: ";
	getline(is, x.Ten);

	cout << "\nNgay lap the: ";
	is >> x.NgayLapSo;

	cout << "\nNhap vao so tien gui: ";
	is >> x.SoTienGui;
	do {

		cout << "\nNhap vao lai suat: ";
		is >> x.LaiSuat;

		if (x.LaiSuat <= 0)
		{
			cout << "\nLai suat nhap vao khong  hop le! Hay nhap lai! ";
		}


	} while (x.LaiSuat <= 0);

	return is;
}
string SoTietKiem::Getter_CMND()
{
	return CMND;
}
void SoTietKiem::Setter_CMND(string x)
{
	CMND = x;
}

ostream& operator <<(ostream &os, SoTietKiem x)
{
	os << "\nSo CMND: " << x.CMND;
	os << "\nHo Ten : " << x.Ten;
	os << "\nSo tien gui: " << x.SoTienGui;
	os << "\nNgay Lap so: " << x.NgayLapSo;
	os << "\nLai Suat: " << x.LaiSuat << "%";
	return  os;
}
void SoTietKiem::TinhSoThangDaGui()
{
	int ngayhientai, thanghientai, namhientai;
	time_t t = time(0);
	struct tm *Now = localtime(&t);
	ngayhientai = Now->tm_mday;
	thanghientai = Now->tm_mon + 1;
	namhientai = Now->tm_year + 1900;

	int ngaygui, thanggui, namgui;

	ngaygui = NgayLapSo.Getter_Ngay();
	thanggui = NgayLapSo.Getter_Thang();
	namgui = NgayLapSo.Getter_Nam();

	int mangngay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ((namhientai % 400 == 0) || (namhientai % 4 == 0 && namhientai % 100 != 0))
	{
		mangngay[1] = 29;
	}

	n = 12 * (float)(namhientai - namgui);

	if (thanghientai > thanggui)
	{
		n += thanghientai - thanggui;
	}
	else
	{
		n -= thanggui - thanghientai;
	}
	if (ngayhientai > ngaygui)
	{
		n += (float)(ngayhientai - ngaygui) / mangngay[thanghientai - 1];
	}
	else
	{
		n--;
		n += (float)((mangngay[thanghientai - 1]) - (ngaygui - ngayhientai)) / mangngay[thanghientai - 1];
	}

}

SoTietKiem::SoTietKiem()
{
}


SoTietKiem::~SoTietKiem()
{
}
