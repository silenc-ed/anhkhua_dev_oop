#pragma once
#include <iostream>
#include <string>

using namespace std;

class NhanVien
{
protected:
	string ten;
	string ngaysinh;
public:
	NhanVien(string ten, string ngaysinh);
};

class NhanVienSanXuat : public NhanVien
{
private:
	int luongCanBan;
	int soSanPham;
public:
	NhanVienSanXuat(string ten, string ngaysinh, int luongCanBan, int soSanPham);
	void nhapNVSX();
	int luong();
	void xuatNVSX();};

class NhanVienVanPhong : public NhanVien
{
private:
	int soNgayLamViec;
public:
	NhanVienVanPhong(string ten, string ngaysinh, int soNgayLamViec);
	void nhapNVVP();
	int luong();
	void xuatNVVP();
};

