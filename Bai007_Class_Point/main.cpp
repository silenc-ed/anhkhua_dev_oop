#include "Bai007_Class_Point.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    point locate_1;
    cout << "nhap toa do (x; y): ";
    locate_1.Nhap();
    while (1) {
        cout << "chon viec ban muon lam: \n";
        cout << "---------------------------- \n";
        cout << "1. di chuyen theo vector \n";
        cout << "2. khoang cach voi 1 diem khac \n";
        cout << "3. thoat \n";
        cout << "---------------------------- \n";
        cout << "nhap so: \n";
        int x; cin >> x;

        while (x < 1 || x > 3) {
            cout << "nhap lai di dcmm: ";
            cin >> x;
        }

        if (x == 1) {
            cout << "---------------------------- \n";
            cout << "nhap vector: ";
            point vector; 
            vector.Nhap();
            (locate_1.move(vector)).Xuat();
        }

        else if (x == 2) {
            cout << "---------------------------- \n";
            cout << "nhap toa do diem con lai: ";
            point direct;
            direct.Nhap();
            cout << "khoang cach la: " << locate_1.distance(direct);
        }
        
        else if (x == 3) {
            cout << "---------------------------- \n";
            cout << "chet me may di!!";
            return 0; 
        }
    }
}