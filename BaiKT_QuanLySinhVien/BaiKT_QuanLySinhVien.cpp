#include "BaiKT_QuanLySinhVien.h"
#include <iostream>
#include <vector>
#include <limits>
#include <string>


using namespace std;

quanli::quanli (int id, string name, int age, float math, float literature, float english) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->math = math;
    this->literature = literature;
    this->english = english;
}

void quanli::getID(int a) {
    this->id = a;
}

void quanli::nhap() {
    cout << "nhap ten: ";
    cin.ignore();
    getline(cin, name);

    // cout << "nhap ID: ";
    // getline(cin, id);

    cout << "nhap tuoi: ";
    cin >> age;
    cin.ignore();
	while (age < 0 || age > 100) {
		cout << "nhap lai: ";
		cin >> age;
	}
    

    cout << "nhap diem toan: "; 
    cin >> math;

    while (math < 0 || math > 10) {
        cout << "nhap lai: ";
        cin >> math;
    }

    cout << "nhap diem van: "; 
    cin >> literature;
    while (literature < 0 || literature > 10) {
        cout << "nhap lai: ";
        cin >> literature;
    }

    cout << "nhap diem anh: "; 
     
    cin >> english;
    while (english < 0 || english > 10) {
        cout << "nhap lai: ";
        cin >> english;
    }
}

float quanli::gpa() {
    float g;
    g = ((math * 2) + (literature * 2) + english) / 5;
    return g;
}

void quanli::xuat() {
    cout << "ten: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "tuoi: " << age << endl;
    cout << "diem toan: " << math << endl;
    cout << "diem van: " << literature << endl;
    cout << "diem anh: " << english << endl;
    cout << "GPA: " << gpa() << endl;
}