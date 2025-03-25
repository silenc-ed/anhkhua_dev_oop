#include <iostream>
#include "Bai014_KeThuaNguoi.h"

using namespace std;

#define MAX 100 // Kích thước tối đa của danh sách

int main() {
    person* danhSach[MAX]; // Mảng tĩnh lưu các đối tượng
    int soLuong = 0; // Số người trong danh sách
    int choice;

    do {
        cout << "\n===== MENU =====";
        cout << "\n1. Them nguoi moi";
        cout << "\n2. In danh sach";
        cout << "\n0. Thoat";
        cout << "\nLua chon: ";
        cin >> choice;
        cin.ignore(); // Xóa bộ nhớ đệm sau khi nhập số

        if (choice == 1) { // THÊM ĐỐI TƯỢNG
            if (soLuong >= MAX) {
                cout << "Danh sach da day!\n";
                continue;
            }

            int type;
            cout << "\nChon loai nguoi muon them:";
            cout << "\n1. Sinh Vien";
            cout << "\n2. Hoc Sinh";
            cout << "\n3. Cong Nhan";
            cout << "\n4. Nghe Si";
            cout << "\n5. Ca Si";
            cout << "\nLua chon: ";
            cin >> type;
            cin.ignore(); // Sửa lỗi bỏ qua dòng khi nhập chuỗi

            person* p = nullptr;

            switch (type) {
            case 1: p = new sv("", 0, "", "", "", "", 0.0); break;
            case 2: p = new hs("", 0, "", "", "", 0.0); break;
            case 3: p = new cn("", 0, "", 0); break;
            case 4: p = new ns("", 0, "", 0); break;
            case 5: p = new cs("", 0, "", 0, 0); break;
            default:
                cout << "Lua chon khong hop le!\n";
                continue;
            }

            if (p) {
                p->nhap(); // Gọi hàm nhập của đối tượng
                danhSach[soLuong++] = p; // Lưu vào danh sách
                cout << "Da them thanh cong!\n";
            }
        }

        else if (choice == 2) { // IN DANH SÁCH
            if (soLuong == 0) {
                cout << "Danh sach rong!\n";
            }
            else {
                cout << "\n===== DANH SACH NGUOI =====\n";
                for (int i = 0; i < soLuong; i++) {
                    danhSach[i]->in();
                    cout << endl;
                }
            }
        }

    } while (choice != 0);

    // Giải phóng bộ nhớ
    for (int i = 0; i < soLuong; i++) {
        delete danhSach[i];
    }

    return 0;
}
