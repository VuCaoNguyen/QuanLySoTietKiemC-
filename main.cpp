#include "NganHang.h"


int main()
{

	
	NganHang x;
	cin >> x;
	cout << x;
	float n = x.TinhTongTienLaiTra();
	cout << "\nTong tien lai: " << (size_t)n;
	system("pause");
	return 0;
}