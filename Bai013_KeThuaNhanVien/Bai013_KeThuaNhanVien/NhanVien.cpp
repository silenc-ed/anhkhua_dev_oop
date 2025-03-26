#include "NhanVien.h"
#include <iostream>
#include <string>

using namespace std;

//constructer
NhanVien::NhanVien(string ten, string ngaysinh) {
	this->ten = ten;
	this->ngaysinh = ngaysinh;
}

NhanVienSanXuat::NhanVienSanXuat(string ten, string ngaysinh, int luongCanBan, int soSanPham)
	: NhanVien(ten, ngaysinh), luongCanBan(luongCanBan), soSanPham(soSanPham) {
}

NhanVienVanPhong::NhanVienVanPhong(string ten, string ngaysinh, int soNgayLamViec)
	: NhanVien(ten, ngaysinh), soNgayLamViec(soNgayLamViec) {
}

//nhap
void NhanVienSanXuat::nhapNVSX() {
	cin >> ten >> ngaysinh >> luongCanBan >> soSanPham;
}

void NhanVienVanPhong::nhapNVVP() {
	cin >> ten >> ngaysinh >> soNgayLamViec;
}

//luong
int NhanVienSanXuat::luong() {
	return luongCanBan + soSanPham * 5000;
}

int NhanVienVanPhong::luong() {
	return soNgayLamViec * 100000;
}

void NhanVienSanXuat::xuatNVXS() {
	cout << ten << endl;
	cout << ngaysinh << endl;
	cout << luong << endl;
}
