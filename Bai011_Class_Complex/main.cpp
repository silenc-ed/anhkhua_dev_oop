#include "Bai011_Class_Complex.h"
#include <iostream>

using namespace std;

int main () {
    sophuc a, b;
    cout << "Nhap so phuc duoi dang x va y (x + yi): " << endl;
    a.nhap();
    b.nhap();
    cout << "Tong: ";
    (a.tong(b)).in();
    cout << endl << "Hieu: ";
    (a.hieu(b)).in();
    cout << endl << "Tich: ";
    (a.tich(b)).in();
    cout << endl << "Thuong: ";
    (a.thuong(b)).in();
    return 0;
}
