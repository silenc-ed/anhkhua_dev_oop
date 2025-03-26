#include <iostream>
#include <vector>

int main() {
    maxtrix mt1, mt2;
    cout << "Nhap kich thuoc ma tran 1: \n";
    mt1.nhap();
    cout << "Nhap kich thuoc ma tran 2: \n";
    mt2.nhap();

    while (true) {
        cout << "---------------------------- \n";
        cout << "Chon viec ban muon lam: \n";
        cout << "---------------------------- \n";
        cout << "1. Tinh tong 2 ma tran \n";
        cout << "2. Tinh hieu 2 ma tran \n";
        cout << "3. Tinh tich 2 ma tran \n";
        cout << "4. Sua ma tran 1 \n";
        cout << "5. Sua ma tran 2 \n";
        cout << "6. Thoat \n";
        cout << "---------------------------- \n";
        cout << "Nhap so: ";
        int x;
        cin >> x;

        if (x == 1) {
            cout << "---------------------------- \n";
            cout << "Ket qua: \n";
            cout << "---------------------------- \n";
            maxtrix kq = mt1.tong(mt2);
            kq.xuat();
        } else if (x == 2) {
            cout << "---------------------------- \n";
            cout << "Ket qua: \n";
            cout << "---------------------------- \n";
            maxtrix kq = mt1.hieu(mt2);
            kq.xuat();
        } else if (x == 3) {
            cout << "---------------------------- \n";
            cout << "Ket qua: \n";
            cout << "---------------------------- \n";
            maxtrix kq = mt1.tich(mt2);
            kq.xuat();
        } else if (x == 4) {
            cout << "---------------------------- \n";
            mt1.nhap();
        } else if (x == 5) {
            cout << "---------------------------- \n";
            mt2.nhap();
        } else if (x == 6) {
            cout << "---------------------------- \n";
            cout << "Ket thuc!!\n";
            return 0;
        }        
        else {
            cout << "Lua chon khong hop le, vui long thu lai!\n";
        }
    }
}
