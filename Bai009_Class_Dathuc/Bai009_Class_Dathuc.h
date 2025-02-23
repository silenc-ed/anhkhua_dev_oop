#pragma once

// Created by _silenc.ed on 2025-02-23
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

class DaThuc{
    private:
        int x2;
        int x1;
        int x0;
    public:
        DaThuc (int x2 = 0, int x1 = 0, int x0 = 0);
        void nhapDaThuc();
        void in();
        DaThuc tongDaThuc(DaThuc fx);
        DaThuc hieuDaThuc(DaThuc fx);
        friend class DaThucBac4;
        int f0();
};

class DaThucBac4 {
    private:
        int x4;
        int x3;
        int x2;
        int x1;
        int x0;
    public:
        DaThucBac4(int x4 = 0, int x3 = 0, int x2 = 0, int x1 = 0, int x0 = 0);
        DaThucBac4 tichDaThuc(DaThuc dt1, DaThuc dt2);
        void inDaThucBac4();
        int f0();
};

