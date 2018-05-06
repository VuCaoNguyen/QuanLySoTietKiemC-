#include "CNgay.h"


bool CNgay::KiemTraNgay()
{
	int NgayMax;
	if ((Nam < 0) || (Thang < 0) || (Thang > 12) || (Ngay < 0) || (Ngay > 31))
	{
		return false;
	}
	if ((Nam % 400 == 0) || ((Nam % 4 == 0) && (Nam % 100 != 0)))
	{
		if (Thang == 2)
		{
			NgayMax = 29;
		}
	}
	else
	{
		NgayMax = 28;
	}
	
	switch (Thang)
	{

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		NgayMax = 31;
		break;
	}
	
	case 4:
	case 6:
	case 9:
	case 11:
	{
		NgayMax = 30;
	}


	default:
		break;

	}

	if (Ngay <= NgayMax)
		{
			return true;
		}
		else
		{
			return false;
		}
	
}


istream& operator >>(istream &is, CNgay &x)
{
	bool Check;
	do {
		Check = true;

		cout << "\nNhap vao Ngay: "; is >> x.Ngay;
		cout << "\nNhap vao thang: "; is >> x.Thang;
		cout << "\nNhap vao nam: "; is >> x.Nam;

		Check = x.KiemTraNgay();
		if (Check == false)
		{
			cout << "Ngay khong hop le hay nhap lai!";
		}

	} while (Check == false);

	return is;

}

ostream& operator <<(ostream &os, CNgay x)
{
	os << "Ngay " << x.Ngay << " thang " << x.Thang << " Nam " << x.Nam;

	return os;
}

int CNgay::Getter_Ngay()
{
	return Ngay;
}

void CNgay::Setter_Ngay(int ngay)
{
	Ngay = ngay;
}

int CNgay::Getter_Thang()
{
	return Thang;
}

void CNgay::Setter_Thang(int thang)
{
	Thang = thang;
}


int CNgay::Getter_Nam()
{
	return Nam;
}

void CNgay::Setter_Nam(int nam)
{
	Nam = nam;
}


CNgay::CNgay()
{
}


CNgay::~CNgay()
{
}
