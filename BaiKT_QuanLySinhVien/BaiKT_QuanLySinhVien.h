#pragma once
#include <iostream>
#include <string>

//                   _ooOoo_
//                  o8888888o
//                  88" . "88
//                  (| -_- |)
//                  O\  =  /O
//               ____/'---'\____
//             .'   \|     |/   '.
//            /   \|||  :  |||/   \ 
//           /  _||||| -:- |||||_  \ 
//           |   |  \\  -  //  |   |
//           | \_|  ''\---/''  |_/ |
//           \  .-\__  '-'  ___/-. /
//         ___\. .'  /--.--\  '. ./___
//      ."" '<  '.___\_<|>_/___.'  >' "".
//     | | :  '- \'.;'\ _ /';.'/ - ' : | |
//     \  \ '-.   \_ __\ /__ _/   .-' /  /
// ====='-.____'-.___\_____/___.-'____.-'======
//                   '=---='
//==============================================
//           佛祖保佑         永无BUG
//               没有眼泪没有恐惧

using namespace std;

class quanli {
    private:
        int id;
        string name;
        int age;
        float math;
        float literature;
        float english;
    public:
        quanli(int id = 0, string name = "", int age = 0, float math = 0, float literature = 0, float english = 0);
        float gpa();
        void nhap();
        void xuat();
        void getID(int a);
};

