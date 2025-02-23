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

struct Time{
    int gio;
    int phut;
    int giay;
};

void nhap(Time &a) {
    cin >> a.gio >> a.phut >> a.giay;
}

void in(Time a) {
    cout << a.gio << ":" << a.phut << ":" << a.giay; 
}

Time tong (Time a, Time b){
    a.giay = a.giay + b.giay;
    if (a.giay > 59) {
        a.giay -= 60;
        a.phut++;
    }
    a.phut = a.phut + b.phut;
    if (a.phut > 59) {
        a.phut -= 60;
        a.gio++;
    }
    a.gio = (a.gio + b.gio);
    a.gio = a.gio % 24;
    return a;
}

int main() {
    Time a;
    cout << "nhap thoi gian: ";
    nhap(a);
    cout << "nhap thoi gian cong them: ";
    Time b;
    nhap(b);
    if (a.phut > 59 || b.phut > 59 || a.giay > 59 || b.giay > 59 || a.phut < 0 || b.phut < 0 || a.giay < 0 || b.giay < 0) {
        cout << "dumb";
        return 0;
    }
    cout << "luc do se la: ";
    in(tong(a, b));
    return 0;
}
