#include "Bai006_Class_PhanSo.h"
#include <iostream>

using namespace std;
// Nhập 2 phân số và xuất hai phân số
int main()
{
    PhanSo ps1, ps2;
    cout << "Nhap phan so thu 1" << endl;
    ps1.Nhap();
    cout << "Nhap phan so thu 2" << endl;
    ps2.Nhap();
    cout << "Hai phan so vua nhap la: " << endl;
    ps1.Xuat();
    ps2.Xuat();

    cout << "Rut gon phan so 1" << endl;
    ps1.rutGonPhanSo();
    ps1.Xuat();

    cout << "Rut gon phan so 2" << endl;
    ps2.rutGonPhanSo();
    ps2.Xuat();

    // Tổng hiệu tích thương hai phân số
    cout << "Tong hai phan so: ";
    PhanSo PhanSoTong = ps1.tongPhanSo(ps2);
    PhanSoTong.Xuat();

    cout << "Tich hai phan so: ";
    PhanSo PhanSoTich = ps1.tichPhanSo(ps2);
    PhanSoTich.Xuat();

    cout << "Thuong hai phan so: ";
    PhanSo PhanSoThuong = ps1.thuongPhanSo(ps2);
    PhanSoThuong.Xuat();
    return 0;
}
