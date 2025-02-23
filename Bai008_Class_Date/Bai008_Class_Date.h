#pragma once

// Created by _silenc.ed on 2025-02-23

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date (int a = 1, int b = 1, int c = 0);
        void Nhap();
        void Xuat();
        int getMonth() {
            return month;
        };
        bool isLeapYear();
        int daysInMonth();
        Date getNextDay(int x);
};