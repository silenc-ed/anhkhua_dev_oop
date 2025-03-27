#include "cotuong.h"
#include "cotuong.cpp"

using namespace std;

int main() {
    string trang = "trang";
    string den = "den";
    vector<chess*> b(32); // Tạo bàn cờ chứa 32 con trỏ quân cờ
    // // Tướng
    // b[0] = new king(trang, 1, 5);
    // b[1] = new king(den, 10, 5);

    // // Sĩ
    // b[2] = new si(trang, 1, 4);
    // b[3] = new si(trang, 1, 6);
    // b[4] = new si(den, 10, 4);
    // b[5] = new si(den, 10, 6);

    // // Tượng
    // b[6] = new tuong(trang, 1, 3);
    // b[7] = new tuong(trang, 1, 7);
    // b[8] = new tuong(den, 10, 3);
    // b[9] = new tuong(den, 10, 7);

    // // Mã (Ngựa)
    // b[10] = new ma(trang, 1, 2);
    // b[11] = new ma(trang, 1, 8);
    // b[12] = new ma(den, 10, 2);
    // b[13] = new ma(den, 10, 8);

    // // Xe
    // b[14] = new xe(trang, 1, 1);
    // b[15] = new xe(trang, 1, 9);
    // b[16] = new xe(den, 10, 1);
    // b[17] = new xe(den, 10, 9);

    // // Pháo
    // b[18] = new phao(trang, 3, 2);
    // b[19] = new phao(trang, 3, 8);
    // b[20] = new phao(den, 8, 2);
    // b[21] = new phao(den, 8, 8);

    // // Tốt
    // b[22] = new tot(trang, 4, 1);
    // b[23] = new tot(trang, 4, 3);
    // b[24] = new tot(trang, 4, 5);
    // b[25] = new tot(trang, 4, 7);
    // b[26] = new tot(trang, 4, 9);

    // b[27] = new tot(den, 7, 1);
    // b[28] = new tot(den, 7, 3);
    // b[29] = new tot(den, 7, 5);
    // b[30] = new tot(den, 7, 7);
    // b[31] = new tot(den, 7, 9);

    while (1) {
        int a = menu1();
        while (a > 7 || a < 0) {
            cout << "Thu lai!!\n";
            a = menu1();
        }
        if (a == 1) {
            king king(trang, 1, 5);
            king.move();
        }
        else if (a == 2) {
            si si(trang, 1, 4);
            si.move();
        }
        else if (a == 3) {
            tuong tuong(trang, 1, 3);
            tuong.move();
        }
        else if (a == 4) {
            phao phao(trang, 3, 2);
            phao.move();
        }
        else if (a == 5) {
            ma ma(trang, 1, 2);
            ma.move();
        }
        else if (a == 6) {
            xe xe(trang, 1, 1);
            xe.move();
        }
        else if (a == 7) {
            tot tot(trang, 4, 1);
            tot.move();
        }
        else {
            cout << "Ket thuc chuong trinh";
            return 0;
        }

        int b = menu2();

        if (b == 0) {
            continue;
        }
        if (b == 1) {
            cout << "Ket thuc chuong trinh";
            return 0;
        }
        else {
            cout << "Thu lai!!\n";
            b = menu2();
        }
    }
    return 0;
}



