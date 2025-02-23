#include "Bai006_Class_PhanSo.h"
#include <iostream>

using namespace std;

// 1. Rút gọn phân số
void PhanSo::rutGonPhanSo()
{
    int gcd = findGCD(tuso, mauso);

    tuso /= gcd;
    mauso /= gcd;

    if (mauso < 0)
    {
        tuso = -tuso;
        mauso = -mauso;
    }
}

// Constructor
PhanSo::PhanSo(int tuso, int mauso) {
    this->tuso = tuso;
    this->mauso = mauso;
    rutGonPhanSo();
}


// 2. Hàm nhập phân số
void PhanSo::Nhap()
{
    cout << "Nhap tu so: ";
    cin >> tuso;
    cout << "Nhap mau so: ";
    cin >> mauso;
    while (1) {
        if (mauso == 0) {
            cout << "r u stupid?? \n, try again nga: ";
            cin >> mauso;
        }
        else {
            break;
        }
    }
}

// 3. Hàm xuất phân số
void PhanSo::Xuat()
{
    cout << tuso << "/" << mauso << endl;
}

// 4. Tìm ước chung lớn nhất
int PhanSo::findGCD(int a, int b)
{
    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }

    return abs(a);
}



// 5. Tổng hiệu tích thương hai phân số
PhanSo PhanSo::tongPhanSo(PhanSo ps)
{
    PhanSo PhanSoTong;
    PhanSoTong.tuso = tuso * ps.mauso + ps.tuso * mauso;
    PhanSoTong.mauso = mauso * ps.mauso;
    PhanSoTong.rutGonPhanSo();
    return PhanSoTong;
}

PhanSo PhanSo::hieuPhanSo(PhanSo ps)
{
    PhanSo PhanSoHieu;
    PhanSoHieu.tuso = tuso * ps.mauso - ps.tuso * mauso;
    PhanSoHieu.mauso = mauso * ps.mauso;
    PhanSoHieu.rutGonPhanSo();
    return PhanSoHieu;
}

PhanSo PhanSo::tichPhanSo(PhanSo ps) {
    PhanSo PhanSoTich;
    PhanSoTich.tuso = tuso * ps.tuso;
    PhanSoTich.mauso = mauso * ps.mauso;
    PhanSoTich.rutGonPhanSo();
    return PhanSoTich;
}

PhanSo PhanSo::thuongPhanSo(PhanSo ps) {
    PhanSo PhanSoThuong;
    PhanSoThuong.tuso = tuso * ps.mauso;
    PhanSoThuong.mauso = mauso * ps.tuso;
    PhanSoThuong.rutGonPhanSo();
    return PhanSoThuong;
}
