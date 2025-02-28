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

// 1. Định nghĩa Struct phân số
struct PhanSo
{
    int tuso;
    int mauso;
};

// 2. Hàm nhập phân số
void Nhap(PhanSo &x)
{
    cout << "Nhap tu so: ";
    cin >> x.tuso;
    cout << "Nhap mau so: ";
    cin >> x.mauso;
}

// 3. Hàm xuất phân số
void Xuat(PhanSo x)
{
    cout << x.tuso << "/" << x.mauso << endl;
}

// 4. Tìm ước chung lớn nhất
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }

    return abs(a);
}

// 5. Rút gọn phân số
void rutGonPhanSo(PhanSo &ps)
{
    int gcd = findGCD(ps.tuso, ps.mauso);

    ps.tuso /= gcd;
    ps.mauso /= gcd;

    if (ps.mauso < 0)
    {
        ps.tuso = -ps.tuso;
        ps.mauso = -ps.mauso;
    }
}

PhanSo timMax(PhanSo a, PhanSo b) {
    return (float(a.tuso / a.mauso) >= float(b.tuso / b.mauso)) ? a : b;
}

// 6. Tổng hiệu tích thương hai phân số
PhanSo tongPhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo PhanSoTong;
    PhanSoTong.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    PhanSoTong.mauso = ps1.mauso * ps2.mauso;

    rutGonPhanSo(PhanSoTong);
    return PhanSoTong;
} 

PhanSo hieuPhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo PhanSoTong;
    PhanSoTong.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    PhanSoTong.mauso = ps1.mauso * ps2.mauso;

    rutGonPhanSo(PhanSoTong);
    return PhanSoTong;
}


PhanSo tichPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo PhanSoTich;
    PhanSoTich.tuso = ps1.tuso * ps2.tuso;
    PhanSoTich.mauso = ps1.mauso * ps2.mauso;
    rutGonPhanSo(PhanSoTich);
    return PhanSoTich;
}

PhanSo thuongPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo PhanSoThuong;
    PhanSoThuong.tuso = ps1.tuso * ps2.mauso;
    PhanSoThuong.mauso = ps1.mauso * ps2.tuso;
    rutGonPhanSo(PhanSoThuong);
    return PhanSoThuong;
}


// Nhập 2 phân số và xuất hai phân số
int main()
{
    PhanSo ps1, ps2;
    cout << "Nhap phan so thu 1: " << endl;
    Nhap(ps1);
    cout << "Nhap phan so thu 2: " << endl;
    Nhap(ps2);
    cout << "Hai phan so vua nhap la: " << endl;
    Xuat(ps1);
    Xuat(ps2);

    cout << "Rut gon phan so 1: ";
    rutGonPhanSo(ps1);
    Xuat(ps1);

    cout << "Rut gon phan so 2: ";
    rutGonPhanSo(ps2);
    Xuat(ps2);

    cout << "Phan So Lon Hon: ";
    Xuat(timMax(ps1, ps2));

    // Tổng hiệu tích thương hai phân số
    cout << "Tong hai phan so: ";
    PhanSo PhanSoTong = tongPhanSo(ps1, ps2);
    Xuat(PhanSoTong);

    cout << "Tich hai phan so: ";
    PhanSo PhanSoTich = tichPhanSo(ps1, ps2);
    Xuat(PhanSoTich);

    cout << "Thuong hai phan so: ";
    PhanSo PhanSoThuong = thuongPhanSo(ps1, ps2);
    Xuat(PhanSoThuong);

    return 0;
}
