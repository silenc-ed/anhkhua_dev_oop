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

int main () {
    DaThuc dt1;
    cout << "nhap da thuc 1: ";
    dt1.nhapDaThuc();
    DaThuc dt2;
    cout << "nhap da thuc 2: ";
    dt2.nhapDaThuc();
    cout << "tong hai da thuc: ";
    (dt1.tongDaThuc(dt2)).in();
    cout << endl << "F(0) = " << (dt1.tongDaThuc(dt2)).f0() << endl;
    cout << "hieu hai da thuc: ";
    (dt1.hieuDaThuc(dt2)).in();
    cout << endl << "F(0) = " << (dt1.hieuDaThuc(dt2)).f0() << endl;
    cout << "tich hai da thuc: ";
    DaThucBac4 dt3;
    (dt3.tichDaThuc(dt1, dt2)).inDaThucBac4();
    cout << endl << "F(0) = " << (dt3.tichDaThuc(dt1, dt2)).f0() << endl;
    return 0;
}
