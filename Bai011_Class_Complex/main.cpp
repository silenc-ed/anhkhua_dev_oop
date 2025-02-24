#include "Bai011_Class_Complex.h"
#include <iostream>

using namespace std;

int main () {
    sophuc a, b;
    cout << "Nhap so phuc duoi dang x va y (x + yi): " << endl;
    a.nhap();
    b.nhap();
    cout << "Tong: ";
    (tong(a, b)).in();
    cout << endl << "Hieu: ";
    (hieu(a, b)).in();
    cout << endl << "Tich: ";
    (tich(a, b)).in();
    cout << endl << "Thuong: ";
    (thuong(a, b)).in();
    return 0;
}
