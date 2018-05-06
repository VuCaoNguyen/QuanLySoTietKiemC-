#pragma once
#include "CNgay.h"
#include <string>
class SoTietKiem
{
protected:
	string CMND, Ten;
	float SoTienGui;
	CNgay NgayLapSo;
	float LaiSuat;
	float n; // số tháng gửi được tính dựa trên ngay gửi
public:
	friend istream& operator >>(istream &, SoTietKiem &);
	friend ostream& operator <<(ostream &, SoTietKiem);
	void TinhSoThangDaGui();
	void Setter_CMND(string);
	string Getter_CMND();

	SoTietKiem();
	~SoTietKiem();
};

