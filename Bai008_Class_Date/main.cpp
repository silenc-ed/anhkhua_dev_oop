#include "Bai008_Class_Date.h"
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
//           佛祖保佑         永无BUG
//               没有眼泪没有恐惧


int main() {
    Date n;
    cout << "chon ngay bat ki: ";
    n.Nhap();
    while (1) {
        cout << "---------------------------- \n";
        cout << "chon viec ban muon lam: \n";
        cout << "---------------------------- \n";
        cout << "1. check nam nhuan \n";
        cout << "2. in ngay trong thang \n";
        cout << "3. doan ngay thu n tiep theo \n";
        cout << "4. thoat \n";
        cout << "---------------------------- \n";
        cout << "nhap so: ";
        int x; cin >> x;
        while (!(x > 0 && x < 5)) {
            cout << "nhap lai di dcmm: ";
            cin >> x;
        }

        if (x == 1) {
            cout << "---------------------------- \n";
            cout << bool(n.isLeapYear()) << endl;
        }

        else if (x == 2) {
            cout << "---------------------------- \n";
            cout << "so ngay cua thang " << n.getMonth() << "la" << n.daysInMonth();
        }
        
        else if (x == 3) {
            cout << "---------------------------- \n";
            cout << "nhap n ngay tiep theo: ";
            int x; cin >> x;
            cout << endl;
            (n.getNextDay(x)).Xuat();
            cout << endl;
        }

        else if (x == 4) {
            cout << "---------------------------- \n";
            cout << "chet me may di!!";
            return 0; 
        }
    }
}