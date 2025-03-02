#include "BaiKT_QuanLySinhVien.h"
#include <iostream>
#include <vector>
#include <limits>
#include <string>

using namespace std;

quanli::quanli(string id, string name, int age, float math, float literature, float english) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->math = math;
    this->literature = literature;
    this->english = english;
}

void quanli::nhap() { 
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, name);

    cout << "Nhap ID: ";
    getline(cin, id);

    cout << "Nhap tuoi: ";
    while (!(cin >> age) || age <= 0) { 
        cout << "Tuoi khong hop le! Nhap lai: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Nhap diem toan: ";
    while (!(cin >> math) || math < 0 || math > 10) { 
        cout << "Diem khong hop le! Nhap lai (0-10): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Nhap diem van: ";
    while (!(cin >> literature) || literature < 0 || literature > 10) {
        cout << "Diem khong hop le! Nhap lai (0-10): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Nhap diem anh: ";
    while (!(cin >> english) || english < 0 || english > 10) {
        cout << "Diem khong hop le! Nhap lai (0-10): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cin.ignore();
}

float quanli::gpa() {
    return ((math * 2) + (literature * 2) + english) / 5;
}

void quanli::xuat() {
    cout << "\nThong tin sinh vien:\n";
    cout << "Ten: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Tuoi: " << age << endl;
    cout << "Diem Toan: " << math << endl;
    cout << "Diem Van: " << literature << endl;
    cout << "Diem Anh: " << english << endl;
    cout << "GPA: " << gpa() << endl;
}
