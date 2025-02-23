#include "Bai009_Class_Dathuc.h"
#include <iostream>

using namespace std;

//                   _ooOoo_
//                  o8888888o
//                  88" . "88
//                  (| -_- |)
//                  O\  =  /O
//               ____/`---'\____
//             .'  \|     |//   `.
//            /  \|||  :  |||//   \ 
//           /  _||||| -:- |||||-  \ 
//           |   | \\  -  ///  |   |
//           | \_|  ''\---/''  |   |
//           \  .-\__  `-`  ___/-. /
//         ___`. .'  /--.--\  `. ./___
//      ."" '<  `.___\_<|>_/___.'  >' "".
//     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//     \  \ `-.   \_ __\ /__ _/   .-` /  /
// =====`-.____`-.___\_____/___.-`____.-'======
//                   `=---='
//==============================================
//           佛祖保佑         永无BUG
//               没有眼泪没有恐惧w

//constructor da thuc
DaThuc::DaThuc(int x2, int x1, int x0) {
    this->x2 = x2;
    this->x1 = x1;
    this->x0 = x0;
}

//constructor da thuc bac 4
DaThucBac4::DaThucBac4(int x4, int x3, int x2, int x1, int x0) {
    this->x4 = x4;
    this->x3 = x3;
    this->x2 = x2;
    this->x1 = x1;
    this->x0 = x0;
}

//nhap da thuc 
void DaThuc::nhapDaThuc() {
    cin >> x2 >> x1 >> x0;
}

//tong da thuc
DaThuc DaThuc::tongDaThuc(DaThuc dt2) {
    DaThuc dt;
    dt.x2 = x2 + dt2.x2;
    dt.x1 = x1 + dt2.x1;
    dt.x0 = x0 + dt2.x0;
    return dt;
}

//hieu da thuc
DaThuc DaThuc::hieuDaThuc (DaThuc dt2) {
    DaThuc dt;
    dt.x2 = x2 - dt2.x2;
    dt.x1 = x1 - dt2.x1;
    dt.x0 = x0 - dt2.x0;
    return dt;
}

//tich da thuc
DaThucBac4 DaThucBac4::tichDaThuc(DaThuc dt1, DaThuc dt2) {
    DaThucBac4 dt;
    dt.x4 = dt1.x2 * dt2.x2;
    dt.x3 = dt1.x2 * dt2.x1 + dt1.x1 * dt2.x2;
    dt.x2 = dt1.x1 * dt2.x1 + dt1.x2 * dt2.x0 + dt1.x0 * dt2.x2;
    dt.x1 = dt1.x1 * dt2.x0 + dt1.x0 * dt2.x1;
    dt.x0 = dt1.x0 * dt2.x0;
    return dt;
}

//in
void DaThuc::in() {
    bool check = false;
    if (x2) {
        check = true;
        cout << x2 << "x^2";
    }
    if (x1) {
        check = true;
        if (x1 > 0) 
        cout << " + " << x1 << "x";
        else cout << " - " << -x1 << "x";
    }   
    if (x0) {
        check = true;
        if (x1 > 0)
        cout << " + " << x0;
        else cout << " - " << -x0;
    }
    if (!check) cout << 0;
}

//in
void DaThucBac4::inDaThucBac4() {
    bool check = false;
    if (x4) {
        check = true;
        cout << x4 << "x^4";
    }
    if (x3) {
        check = true;
        if (x3 > 0) 
        cout << " + " << x3 << "x^3";
        else cout << " - " << -x3 << "x^3";
    }
    if (x2) {
        check = true;
        if (x2 > 0) 
        cout << " + " << x2 << "x^2";
        else cout << " - " << -x2 << "x^2";
    }
    if (x1) {
        check = true;
        if (x1 > 0) 
        cout << " + " << x1 << "x";
        else cout << " - " << -x1 << "x";
    }
    if (x0) {
        check = true;
        if (x1 > 0) 
        cout << " + " << x0;
        else cout << " - " << -x0;
    }
    if (!check) cout << 0;
}

int DaThuc::f0() {
    return x0;
}

int DaThucBac4::f0() {
    return x0;
}