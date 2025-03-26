#include <iostream>
#include "Bai014_KeThuaNguoi.h"

using namespace std;

#define MAX 100

int main() {
    person* danhSach[MAX]; // Mảng con trỏ chứa các đối tượng person
    int soLuong = 0;
    int luaChon;

    do {
        cout << "\n========================";
        cout << "\n1. Nhap thong tin moi";
        cout << "\n2. Chinh sua thong tin";
        cout << "\n3. Hien thi danh sach";
        cout << "\n0. Thoat";
        cout << "\n========================";
        cout << "\nNhap lua chon: ";
        cin >> luaChon;
        cin.ignore();

        switch (luaChon) {
        case 1: { // Nhập dữ liệu mới
            if (soLuong >= MAX) {
                cout << "Danh sach da day!\n";
                break;
            }

            int type;
            cout << "\nChon loai nguoi:";
            cout << "\n1. Sinh vien";
            cout << "\n2. Hoc sinh";
            cout << "\n3. Cong nhan";
            cout << "\n4. Nghe si";
            cout << "\n5. Ca si";
            cout << "\nNhap loai: ";
            cin >> type;
            cin.ignore();

            switch (type) {
            case 1:
                danhSach[soLuong] = new sv("", 0, "", "", "", "", 0);
                break;
            case 2:
                danhSach[soLuong] = new hs("", 0, "", "", "", 0);
                break;
            case 3:
                danhSach[soLuong] = new cn("", 0, "", 0);
                break;
            case 4:
                danhSach[soLuong] = new ns("", 0, "", 0);
                break;
            case 5:
                danhSach[soLuong] = new cs("", 0, "", 0, 0);
                break;
            default:
                cout << "Loai khong hop le!\n";
                continue;
            }

            danhSach[soLuong]->nhap();
            soLuong++;
            cout << "\nNhap thanh cong!!";
            break;
        }

        case 2: { 
            if (soLuong == 0) {
                cout << "Danh sach rong!\n";
                break;
            }

            cout << "Nhap vi tri can sua (0 - " << soLuong - 1 << "): ";
            int index;
            cin >> index;
            cin.ignore();

            if (index < 0 || index >= soLuong) {
                cout << "Vi tri khong hop le!\n";
            }
            else {
                cout << "Nhap thong tin moi:\n";
                danhSach[index]->nhap();
            }
            break;
        }

        case 3: {
            if (soLuong == 0) {
                cout << "Danh sach rong!\n";
            }
            else {
                for (int i = 0; i < soLuong; i++) {
                    danhSach[i]->in();
                }
            }
            break;
        }

        case 0:
            cout << "Thoat chuong trinh.\n";
            for (int i = 0; i < soLuong; i++) {
                delete danhSach[i]; 
            }
            break;

        default:
            cout << "Lua chon khong hop le!\n";
        }
    } while (luaChon != 0);

    return 0;
}
