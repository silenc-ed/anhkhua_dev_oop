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

//phuong trinh bac 2
struct DaThuc {
    int x2;
    int x1;
    int x0;
};

struct DaThucBac4 {
    int x4;
    int x3;
    int x2;
    int x1; 
    int x0;
};


//nhap da thuc 
void nhapDaThuc(DaThuc &dt) {
    cin >> dt.x2 >> dt.x1 >> dt.x0;
}

//tong da thuc
DaThuc tongDaThuc (DaThuc dt1, DaThuc dt2) {
    DaThuc dt;
    dt.x2 = dt1.x2 + dt2.x2;
    dt.x1 = dt1.x1 + dt2.x1;
    dt.x0 = dt1.x0 + dt2.x0;
    return dt;
}

//hieu da thuc
DaThuc hieuDaThuc (DaThuc dt1, DaThuc dt2) {
    DaThuc dt;
    dt.x2 = dt1.x2 - dt2.x2;
    dt.x1 = dt1.x1 - dt2.x1;
    dt.x0 = dt1.x0 - dt2.x0;
    return dt;
}

//tich da thuc
DaThucBac4 tichDaThuc (DaThuc dt1, DaThuc dt2) {
    DaThucBac4 dt;
    dt.x4 = dt1.x2 * dt2.x2;
    dt.x3 = dt1.x2 * dt2.x1 + dt1.x1 * dt2.x2;
    dt.x2 = dt1.x1 * dt2.x1 + dt1.x2 + dt2.x0 + dt1.x0 * dt2.x2;
    dt.x1 = dt1.x1 * dt2.x0 + dt1.x0 * dt2.x1;
    dt.x0 = dt1.x0 * dt2.x0;
    return dt;
}

//in
void in(DaThuc dt) {
    bool check = false;
    if (dt.x2) {
        check = true;
        cout << dt.x2 << "x^2";
    }
    if (dt.x1) {
        check = true;
        if (dt.x1 > 0) 
        cout << " + " << dt.x1 << "x";
        else cout << " - " << -dt.x1 << "x";
    }   
    if (dt.x0) {
        check = true;
        if (dt.x1 > 0)
        cout << " + " << dt.x0;
        else cout << " - " << -dt.x0;
    }
    if (!check) cout << 0;
}

//in
void in(DaThucBac4 dt) {
    bool check = false;
    if (dt.x4) {
        check = true;
        cout << dt.x4 << "x^4";
    }
    if (dt.x3) {
        check = true;
        if (dt.x3 > 0) 
        cout << " + " << dt.x3 << "x^3";
        else cout << " - " << -dt.x3 << "x^3";
    }
    if (dt.x2) {
        check = true;
        if (dt.x2 > 0) 
        cout << " + " << dt.x2 << "x^2";
        else cout << " - " << -dt.x2 << "x^2";
    }
    if (dt.x1) {
        check = true;
        if (dt.x1 > 0) 
        cout << " + " << dt.x1 << "x";
        else cout << " - " << -dt.x1 << "x";
    }
    if (dt.x0) {
        check = true;
        if (dt.x1 > 0) 
        cout << " + " << dt.x0;
        else cout << " - " << -dt.x0;
    }
    if (!check) cout << 0;
}


int main () {
    DaThuc dt1;
    cout << "nhap da thuc 1: ";
    nhapDaThuc(dt1);
    DaThuc dt2;
    cout << "nhap da thuc 2: ";
    nhapDaThuc(dt2);
    cout << "tong hai da thuc: ";
    in(tongDaThuc(dt1, dt2));
    cout << endl << "F(0) = " << tongDaThuc(dt1, dt2).x0 << endl;
    cout << "hieu hai da thuc: ";
    in(hieuDaThuc(dt1, dt2));
    cout << endl << "F(0) = " << hieuDaThuc(dt1, dt2).x0 << endl;
    cout << "tich hai da thuc: ";
    in(tichDaThuc(dt1, dt2));
    cout << endl << "F(0) = " << tichDaThuc(dt1, dt2).x0 << endl;
    return 0;
}
