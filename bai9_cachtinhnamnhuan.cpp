// bai9_cachtinhnamnhuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isNamNhuan(int sonam);
int main() {
	int nam;
	cout << "nhap nam:  ";
	cin >> nam;

	if (isNamNhuan(nam)) {
		cout << "Nam Nhuan";
	}
	else {
		cout << "Khong Nam Nhuan";
	}
	return 0;
}
/// <summary>
/// Ham dung de xac dinh nam nhuan hay ko
/// Neu nhuan = true
/// Neu ko nhuan = false
/// </summary>
/// <param name="sonam"></param>
/// <returns></returns>
bool isNamNhuan(int sonam) {
	if (sonam % 4 == 0 && sonam % 100 != 0 || sonam % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}

