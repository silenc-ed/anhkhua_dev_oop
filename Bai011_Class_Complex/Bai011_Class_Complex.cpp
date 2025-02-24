#include "Bai011_Class_Complex.h"
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
//               没有眼泪没有恐惧

void sophuc::nhap() {
    cin >> thuc >> ao;
}

void sophuc::in() {
    cout << thuc;
    if (ao < 0) {
        cout << " - " << -ao <<"i";
    }
    else if (ao == 0) {
        return;
    }
    else cout << " + " << ao <<"i";
}

sophuc sophuc::tong(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    return c; 
}

sophuc sophuc::hieu(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = a.thuc - b.thuc;
    c.ao = a.ao - b.ao;
    return c; 
}

sophuc sophuc::tich(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = a.thuc * b.thuc - a.ao * b.ao;
    c.ao = b.thuc * a.ao + b.ao * a.thuc;
    return c; 
}

sophuc sophuc::thuong(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = (a.thuc * b.thuc + a.ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    c.ao = (b.thuc * a.ao - b.ao * a.thuc) / (b.thuc * b.thuc + b.ao * b.ao);
    return c; 
}