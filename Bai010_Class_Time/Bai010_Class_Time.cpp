#include "Bai010_Class_Time.h"
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

Time::Time(int hour, int min, int sec) {
    this->hour = hour;
    this->min = min;
    this->sec = sec;
} 

void Time::Nhap() {
    cin >> hour >> min >> sec;
    while(1) {
        if ((min > 59 || sec > 59 || min < 0 || sec < 0)) {
            cout << "nhap lai di: ";
            cin >> hour >> min >> sec;
        }
        else return;
    }
}

void Time::Xuat() {
    cout << hour << ":" << min << ":" << sec;
}

Time Time::tong(Time b){
    Time a;
    a.sec = sec + b.sec;
    if (a.sec > 59) {
        a.sec -= 60;
        a.min++;
    }
    a.min = min + b.min;
    if (a.min > 59) {
        a.min -= 60;
        a.hour++;
    }
    a.hour = (hour + b.hour);
    a.hour = a.hour % 24;
    return a;
}
