#include "Bai007_Class_Point.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
 *                   _ooOoo_
 *                  o8888888o
 *                  88" . "88
 *                  (| -_- |)
 *                  O\  =  /O
 *               ____/`---'\____
 *             .'  \\|     |//  `.
 *            /  \\|||  :  |||//  \
 *           /  _||||| -:- |||||-  \
 *           |   | \\\  -  /// |   |
 *           | \_|  ''\---/''  |   |
 *           \  .-\__  `-`  ___/-. /
 *         ___`. .'  /--.--\  `. . __
 *      ."" '<  `.___\_<|>_/___.'  >'"".
 *     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
 *     \  \ `-.   \_ __\ /__ _/   .-` /  /
 * =====`-.____`-.___\_____/___.-`____.-'======
 *                   `=---='
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 */



int main() {
    point locate_1;
    cout << "nhap toa do (x; y): ";
    locate_1.Nhap();
    while (1) {
        cout << "---------------------------- \n";
        cout << "chon viec ban muon lam: \n";
        cout << "---------------------------- \n";
        cout << "1. di chuyen theo vector \n";
        cout << "2. khoang cach voi 1 diem khac \n";
        cout << "3. thoat \n";
        cout << "---------------------------- \n";
        cout << "nhap so: ";
        int x; ;

        while (!(cin >> x) || !(x > 0 && x < 4)) {
            cout << "nhap lai di dcmm: ";
            cin >> x;
        }

        if (x == 1) {
            cout << "---------------------------- \n";
            cout << "nhap vector: ";
            point vector; 
            vector.Nhap();
            (locate_1.move(vector)).Xuat();
            cout << endl;
        }

        else if (x == 2) {
            cout << "---------------------------- \n";
            cout << "nhap toa do diem con lai: ";
            point direct;
            direct.Nhap();
            cout << "khoang cach la: " << locate_1.distance(direct);
            cout << endl;
        }
        
        else if (x == 3) {
            cout << "---------------------------- \n";
            cout << "chet me may di!!";
            return 0; 
        }
    }
}