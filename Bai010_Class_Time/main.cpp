#include "Bai010_Class_Time.h"
#include <iostream>

using namespace std;

int main() {
    Time n;
    cout << "nhap thoi gian bat ki: ";
    n.Nhap();
    while (1) {
        cout << "\n---------------------------- \n";
        cout << "chon viec ban muon lam: \n";
        cout << "---------------------------- \n";
        cout << "1. tinh tgian tiep theo: \n";
        cout << "2. thoat \n";
        cout << "---------------------------- \n";
        cout << "nhap so: ";
        int x = 2; 
        cin >> x;
        while ((x < 1 && x > 2)) {
            cout << "nhap lai di dcmm: ";
            cin >> x;
        }

        if (x == 1) {
            cout << "---------------------------- \n";
            cout << "Chon tgian tiep theo: ";
            Time a;
            a.Nhap();
            cout << "Tgian tiep theo se la: ";
            (n.tong(a)).Xuat();
        }

        else if (x == 2) {
            cout << "---------------------------- \n";
            cout << "chet me may di!!";
            return 0; 
        }
    }
}