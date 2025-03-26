#include "Bai008_Class_Date.h"
#include <iostream>

using namespace std;

// 1. constructor
Date::Date(int a, int b, int c) {
    this->day = a;
    this->month = b;
    this->year = c;
}

//nhap ngay thang nam
void Date::Nhap() {
    cin >> day >> month >> year;
}

//in ngay thang nam
void Date::Xuat() {
    cout << day << "/" << month << "/" << year;
}

//lay thang

// 2. Kiểm tra năm nhuận
bool Date::isLeapYear() {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 3. Hàm trả về số ngày trong một tháng
int Date::daysInMonth() {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return (isLeapYear() ? 29 : 28);
    default:
        return 0;
    }
}

// 4. Hàm trả về ngày tiếp theo
Date Date::getNextDay(int x) {
    Date nextDate = *this;
    nextDate.day += x;
    while (nextDate.day > nextDate.daysInMonth()) {
        nextDate.day -= nextDate.daysInMonth();
        nextDate.month++;
        if (nextDate.month > 12) {
            nextDate.month = 1;
            nextDate.year++;
        }
    }
    return nextDate;
}