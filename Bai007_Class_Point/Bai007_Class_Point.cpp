#include "Bai007_Class_Point.h"
#include <iostream>
#include <cmath>

using namespace std;

//constructor
point::point(int a, int b) {
    this->x = a;
    this->y = b;
}

//ham nhap
void point::Nhap() {
    cin >> x >> y;
}

//ham in
void point::Xuat() {
    cout << "(" << x << "; " << y << ")";
}

//ham move
point point::move(point vector) {
    point location;
    location.x = x + vector.x;
    location.y = y + vector.y;
    return location;
}

//ham distance
double point::distance(point location) {
    double dis;
    dis = sqrt((x - location.x)*(x - location.x) + (y - location.y)*(y - location.y));
    return dis;
}


