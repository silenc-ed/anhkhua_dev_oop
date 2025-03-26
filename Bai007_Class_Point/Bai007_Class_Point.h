#pragma once
#include <iostream>

// Created by _silenc.ed on 2025-02-23

class point{
    private:
        int x;
        int y;
    public:
        point (int x = 0, int y = 0);
        void Nhap();
        void Xuat();
        point move(point vector);
        double distance(point location);
};