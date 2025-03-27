#include "cotuong.h"



int menu1() {
    cout << "=============================\n";
    cout << "Ban co co 32 quan\n";
    cout << "1. Tuong (Vua)\n";
    cout << "2. Si\n";
    cout << "3. Tuong\n";
    cout << "4. Phao\n";
    cout << "5. Ma\n";
    cout << "6. Xe\n";
    cout << "7. Tot\n";
    cout << "0. Thoat\n";
    cout << "=============================\n";
    cout << "Chon quan ban muon: ";
    int a;
    cin >> a;
    return a;
}

int menu2() {
    cout << "0. Tro lai\n1. Thoat\n";
    cout << "=============================\n";
    cout << "Chon yeu cau:";
    int a;
    cin >> a;
    return a;
}

chess::chess(string color, int x, int y) {
    this->color = color;
    this->x = x;
    this->y = y;
}

void king::move() {
    cout << "Di tung o mot, di ngang hoac doc. Tuong luon luon phai o trong pham vi cung va khong duoc ra ngoai\n";
}

void si::move() {
    cout << "Di xeo 1 o moi nuoc. Si luon luon phai o trong cung nhu Tuong.\n";
}

void tuong::move() {
    cout << "Di cheo 2 o (ngang 2 va doc 2) cho moi nuoc di. Tuong chi duoc phep o mot ben cua ban co, khong duoc di chuyen sang nua ban co cua doi phuong. Nuoc di cua tuong se khong hop le khi co mot quan co nam chan giua duong di.\n";
}

void phao::move() {
    cout << "Di ngang va doc giong nhu xe. Diem khac biet la neu phao muon an quan, phao phai nhay qua dung 1 quan nao do. Khi khong an quan, tat ca nhung diem tu cho di den cho den phai khong co quan can.\n";
}

void ma::move() {
    cout << "Di ngang 2 o va doc 1 o (hay doc 2 o va ngang 1 o) cho moi nuoc di. Neu co quan nam ngay ben canh ma va can duong ngang 2 (hay duong doc 2), ma bi can khong duoc di duong do.\n";
}

void xe::move() {
    cout << "Di ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem den.\n";
}

void tot::move() {
    cout << "Di mot o moi nuoc. Neu tot chua vuot qua song, no chi co the di thang tien. Khi da vuot song roi, tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi nuoc.\n";
}