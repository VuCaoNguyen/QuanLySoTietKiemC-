#pragma once
#include "SoTietKiem.h"
class SoCoKyHan : public  SoTietKiem
{
private:
	int  KyHanGui;

public:
	friend istream& operator  >>(istream &, SoCoKyHan &);
	friend ostream& operator  <<(ostream &, SoCoKyHan);
	float TinhTienLai();

	SoCoKyHan();
	~SoCoKyHan();
};

