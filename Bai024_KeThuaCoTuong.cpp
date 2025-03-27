#include <iostream>
#include <vector>

using namespace std;

class chess {
protected:    
    string color;
    int x, y;
public:
    chess(string color, int x, int y) {
        this->color = color;
        this->x = x;
        this->y = y;
    }
    virtual ~chess() {};
    virtual void move() = 0;
};

class king : public chess {
    public: 
    king(string color, int x, int y) : chess(color, x, y) {};
    void move() {
        cout << "Di tung o mot, di ngang hoac doc. Tuong luon luon phai o trong pham vi cung va khong duoc ra ngoai\n";
    }
};
 
class si : public chess {
    public:
    si(string color, int x, int y) : chess(color, x, y) {};
    void move() {
        cout << "Di xeo 1 o moi nuoc. Si luon luon phai o trong cung nhu Tuong.\n";
    }
};
 
class tuong : public chess {
    public:
    tuong(string color, int x, int y) : chess(color, x, y) {};
    void move() {
        cout << "Di cheo 2 o (ngang 2 va doc 2) cho moi nuoc di. Tuong chi duoc phep o mot ben cua ban co, khong duoc di chuyen sang nua ban co cua doi phuong. Nuoc di cua tuong se khong hop le khi co mot quan co nam chan giua duong di.\n";
    }
};
 
class phao : public chess {
    public:
    phao(string color, int x, int y) : chess(color, x, y) {};
    void move() {
        cout << "Di ngang va doc giong nhu xe. Diem khac biet la neu phao muon an quan, phao phai nhay qua dung 1 quan nao do. Khi khong an quan, tat ca nhung diem tu cho di den cho den phai khong co quan can.\n";
    }
};
 
class ma : public chess {
    public:
    ma(string color, int x, int y) : chess(color, x, y) {};
    void move() {
        cout << "Di ngang 2 o va doc 1 o (hay doc 2 o va ngang 1 o) cho moi nuoc di. Neu co quan nam ngay ben canh ma va can duong ngang 2 (hay duong doc 2), ma bi can khong duoc di duong do.\n";
    }
};
 
class xe : public chess {
    public:
    xe(string color, int x, int y) : chess(color, x, y) {};
    void move() {
        cout << "Di ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem den.\n";
    }
};
 
class tot : public chess {
    public:
    tot(string color, int x, int y) : chess(color, x, y) {};
    void move() {
        cout << "Di mot o moi nuoc. Neu tot chua vuot qua song, no chi co the di thang tien. Khi da vuot song roi, tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi nuoc.\n";
    }
};

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
 

int main() {
    string trang = "trang";
    string den = "den";
    vector<chess*> b(32); // Tạo bàn cờ chứa 32 con trỏ quân cờ
    // // Tướng
    // b[0] = new king(trang, 1, 5);
    // b[1] = new king(den, 10, 5);

    // // Sĩ
    // b[2] = new si(trang, 1, 4);
    // b[3] = new si(trang, 1, 6);
    // b[4] = new si(den, 10, 4);
    // b[5] = new si(den, 10, 6);

    // // Tượng
    // b[6] = new tuong(trang, 1, 3);
    // b[7] = new tuong(trang, 1, 7);
    // b[8] = new tuong(den, 10, 3);
    // b[9] = new tuong(den, 10, 7);

    // // Mã (Ngựa)
    // b[10] = new ma(trang, 1, 2);
    // b[11] = new ma(trang, 1, 8);
    // b[12] = new ma(den, 10, 2);
    // b[13] = new ma(den, 10, 8);

    // // Xe
    // b[14] = new xe(trang, 1, 1);
    // b[15] = new xe(trang, 1, 9);
    // b[16] = new xe(den, 10, 1);
    // b[17] = new xe(den, 10, 9);

    // // Pháo
    // b[18] = new phao(trang, 3, 2);
    // b[19] = new phao(trang, 3, 8);
    // b[20] = new phao(den, 8, 2);
    // b[21] = new phao(den, 8, 8);

    // // Tốt
    // b[22] = new tot(trang, 4, 1);
    // b[23] = new tot(trang, 4, 3);
    // b[24] = new tot(trang, 4, 5);
    // b[25] = new tot(trang, 4, 7);
    // b[26] = new tot(trang, 4, 9);

    // b[27] = new tot(den, 7, 1);
    // b[28] = new tot(den, 7, 3);
    // b[29] = new tot(den, 7, 5);
    // b[30] = new tot(den, 7, 7);
    // b[31] = new tot(den, 7, 9);

    while (1) {
        int a = menu1();
        while (a > 7 || a < 0) {
            cout << "Thu lai!!\n";
            a = menu1();
        }
        if (a == 1) {
            king king(trang, 1, 5);
            king.move();
        }
        else if (a == 2) {
            si si(trang, 1, 4);
            si.move();
        }
        else if (a == 3) {
            tuong tuong(trang, 1, 3);
            tuong.move();
        }
        else if (a == 4) {
            phao phao(trang, 3, 2);
            phao.move();
        }
        else if (a == 5) {
            ma ma(trang, 1, 2);
            ma.move();
        }
        else if (a == 6) {
            xe xe(trang, 1, 1);
            xe.move();
        }
        else if (a == 7) {
            tot tot(trang, 4, 1);
            tot.move();
        }
        else {
            cout << "ket thuc chuong trinh";
            return 0;
        }

        int b = menu2();
        
        if (b == 0) {
            continue;
        }
        if (b == 1) {
            cout << "ket thuc chuong trinh";
            return 0;
        }
        else {
            cout << "Thu lai!!\n";
            b = menu2();
        }
    }
    return 0;
}