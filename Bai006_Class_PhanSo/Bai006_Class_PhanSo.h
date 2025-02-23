#pragma once
#include <iostream>
// Created by _silenc.ed on 2025-02-23

class PhanSo{
    private:
        int tuso;
        int mauso;
        int findGCD(int a, int b);

    public:
        PhanSo(int tuso = 0, int mauso = 1);
        void Nhap();
        void Xuat();
        void rutGonPhanSo();
        PhanSo tongPhanSo(PhanSo ps);
        PhanSo hieuPhanSo(PhanSo ps);
        PhanSo tichPhanSo(PhanSo ps);
        PhanSo thuongPhanSo(PhanSo ps);
};