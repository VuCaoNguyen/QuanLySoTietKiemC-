#include "NganHang.h"


istream& operator >>(istream &is, NganHang &x)
{
	int luachon;

	do {
		cout << "\n--------------------------MENU----------------------";
		cout << "\n1. Nhap so co ky han.";
		cout << "\n2. Nhap so khong ky han.";
		cout << "\n3. Exit().";
		cout << "\n-----------------------------------------------------";
		do
		{
			cout << "\nNhap vao lua chon: ";
			is >> luachon;

			if (luachon < 1 || luachon > 3)
			{
				cout << "\nlua chon khong hop le xin nhap lai:";
			}

		} while (luachon < 1 || luachon > 3);
		string cmnd;
		bool CheckTrung;
		is.ignore();
		if (luachon != 3)
		{
			do {

				cout << "\nNhap vao CMND: ";
				getline(is, cmnd);
				CheckTrung = true;
				int size_SoKhongKyHan = x.ListSoKhongKyHan.size();
				for (int i = 0; i < size_SoKhongKyHan; i++)
				{
					if (x.ListSoKhongKyHan[i].Getter_CMND() == cmnd)
					{
						CheckTrung = false;
						break;

					}
				}
				if (CheckTrung == true)
				{
					int size_SoCoKyHan = x.ListSoCoKyHan.size();
					for (int i = 0; i < size_SoCoKyHan; i++)
					{
						if (x.ListSoCoKyHan[i].Getter_CMND() == cmnd)
						{
							CheckTrung = false;
							break;
						}
					}

				}
				if (CheckTrung == false)
				{
					cout << "\nCMND da trung xin nhap lai:";
				}
			} while (CheckTrung == false);


		}
		

			
		//So co ky han;
			if (luachon == 1)
			{
				SoCoKyHan a;
				is >> a;
				a.Setter_CMND(cmnd);
				x.ListSoCoKyHan.push_back(a);

			}

			// so khong ky han.
			else if (luachon == 2)
			{
				SoKhongKyhan a;
				is >> a;
				a.Setter_CMND(cmnd);
				x.ListSoKhongKyHan.push_back(a);
			}
	} while (luachon != 3);

	return is;
}

ostream& operator <<(ostream &os, NganHang x)
{
	int size_SoCoKyHan = x.ListSoCoKyHan.size();
	int size_SoKhongKyHan = x.ListSoKhongKyHan.size();
	for (int i = 0; i < size_SoKhongKyHan; i++)
	{
		os << "\nSo khong ky han thu " << i + 1;
		os << x.ListSoKhongKyHan[i];
	}

	for (int i = 0; i < size_SoCoKyHan; i++)
	{

		os << "\nSo co ky han thu " << i + 1;
		os << x.ListSoCoKyHan[i];
	}

	return os;
}

float NganHang::TinhTongTienLaiTra()
{
	float Tong = 0;
	int size_SoCoKyHan = ListSoCoKyHan.size();
	int size_SoKhongKyHan = ListSoKhongKyHan.size();
	for (int i = 0; i < size_SoKhongKyHan; i++)
	{
		Tong += ListSoKhongKyHan[i].TinhTienLai();
	}

	for (int i = 0; i < size_SoCoKyHan; i++)
	{
		Tong += ListSoCoKyHan[i].TinhTienLai();
		
	}

	return Tong;
}
NganHang::NganHang()
{
}


NganHang::~NganHang()
{
}
