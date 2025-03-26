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

struct sophuc {
    double thuc;
    double ao;
};

void nhap(sophuc &a) {
    cin >> a.thuc >> a.ao; 
}

sophuc tong(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    return c; 
}

sophuc hieu(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = a.thuc - b.thuc;
    c.ao = a.ao - b.ao;
    return c; 
}

sophuc tich(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = a.thuc * b.thuc - a.ao * b.ao;
    c.ao = b.thuc * a.ao + b.ao * a.thuc;
    return c; 
}

sophuc thuong(sophuc a, sophuc b) {
    sophuc c;
    c.thuc = (a.thuc * b.thuc + a.ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    c.ao = (b.thuc * a.ao - b.ao * a.thuc) / (b.thuc * b.thuc + b.ao * b.ao);
    return c; 
}

void in(sophuc a) {
    cout << a.thuc;
    if (a.ao < 0) {
        cout << " - " << -a.ao <<"i";
    }
    else if (a.ao == 0) {
        return;
    }
    else cout << " + " << a.ao <<"i";
}


int main () {
    sophuc a, b;
    cout << "Nhap so phuc duoi dang x va y (x + yi): " << endl;
    nhap(a);
    nhap(b);
    cout << "Tong: ";
    in(tong(a, b));
    cout << endl << "Hieu: ";
    in(hieu(a, b));
    cout << endl << "Tich: ";
    in(tich(a, b));
    cout << endl << "Thuong: ";
    in(thuong(a, b));
    return 0;
}
