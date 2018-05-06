#pragma once
//#ifndef  NguyenDepTrai

//#define NguyenDepTrai
#include "SoCoKyHan.h"
#include "SoKhongKyhan.h"
#include <vector>
class NganHang
{
private:
	vector<SoCoKyHan> ListSoCoKyHan;
	vector<SoKhongKyhan> ListSoKhongKyHan;
public:
	friend istream& operator  >>(istream &, NganHang &);
	friend ostream& operator  <<(ostream &, NganHang);
	float  TinhTongTienLaiTra();
	NganHang();
	~NganHang();
};

//#endif NguyenDepTrai // ! 
