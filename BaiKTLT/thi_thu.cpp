#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>

using namespace std;

double ran(double min, double max) {
    return double(rand() / RAND_MAX) * (max - min) + min;
}

class nguonsang {
    protected:
        int buocsong;
        string ten;
        string dangpho;
        string dactrungvatli;
        int cuongdobandau;
    public:
        nguonsang() {}
        ~nguonsang() {}

        virtual string getTen() = 0;

        virtual double getBSKH(nguonsang* p2) = 0;

        virtual string getDPKH(nguonsang* p2) = 0;

        double getCD() {
            return cuongdobandau;
        }

        int getBuocSong() {
            return buocsong;
        }

        void inThongTin() {
            cout << ten << " | Bước sóng: " << buocsong
            << " nm | Dạng phổ: " << dangpho
            << " | CuongDoBanDau: " << cuongdobandau << " mW | Đặc trưng: " << dactrungvatli << endl;
        }

};

class laser : public nguonsang {
    public:
        laser() : nguonsang() {
            ten = "laser";
            buocsong = 650;
            cuongdobandau = ran(5, 50);
            dangpho = "don sac";
        }

        ~laser() {}

        string getTen() override {
            return "laser";
        }

        double getBSKH(nguonsang* p2) {
            if (p2->getTen() == "laser") {
                double l_p2 = p2->getBuocSong();
                double p_p2 = p2->getCD();
                return (buocsong * cuongdobandau + l_p2 * p_p2) / (cuongdobandau * p_p2);
            }

            else if (p2->getTen() == "led" || p2->getTen() == "anh sang trang") {
                return (buocsong + p2->getBuocSong()) / 2;
            }

            return 0;
        }

        string getDPKH(nguonsang* p2) {
            if (p2->getTen() == "laser") {
                return "don sac";
            }

            else if (p2->getTen() == "led" || p2->getTen() == "anh sang trang") {
                return "pho rong";
            }

            return "loi khong xac dinh";
        }
};

class led : public nguonsang {
    public:
        led() : nguonsang() {
            ten = "led";
            buocsong = ran(470, 630);
            cuongdobandau = ran(1, 20);
            dangpho = "ban don sac";
        }
        ~led() {}

        string getTen() override {
            return "led";
        }

        double getBSKH(nguonsang* p2) {
            if (p2->getTen() == "laser") {
                return (buocsong + p2->getBuocSong()) / 2;
            }

            else if (p2->getTen() == "led") {
                return max(buocsong, p2->getBuocSong());
            }

            else if (p2->getTen() == "anh sang trang") {
                return (buocsong + p2->getBuocSong()) / 2;
            }

            return 0;
        }

        string getDPKH(nguonsang* p2) {
            if (p2->getTen() == "laser") {
                return "pho rong";
            }

            else if (p2->getTen() == "led") {
                return "ban don sac";
            }

            else if (p2->getTen() == "anh sang trang") {
                return "lien tuc";
            }

            return "loi khong xac dinh";

        }
};

class astrang : public nguonsang {
    public:
        astrang() : nguonsang() {
            ten = "anh sang trang";
            buocsong = ran(400, 700);
            cuongdobandau = ran(5, 100);
            dangpho = "lien tuc";
        }
        ~astrang() {}

        string getTen () override {
            return "anh sang trang";
        }

        double getBSKH(nguonsang* p2) {
            if (p2->getTen() == "laser") {
                return (buocsong + p2->getBuocSong()) / 2;
            }

            else if (p2->getTen() == "led") {
                return max(buocsong, p2->getBuocSong());
            }

            else if (p2->getTen() == "anh sang trang") {
                return ran(400, 700);
            }
            return 0;
        }

        string getDPKH(nguonsang* p2) {
            if (p2->getTen() == "laser") {
                return "pho rong";
            }

            else if (p2->getTen() == "led") {
                return "lien tuc";
            }

            else if (p2->getTen() == "anh sang trang") {
                return "lien tuc";
            }

            return "loi khong xac dinh";
        }
};

class vatlieu {
    protected:
        string ten;
        double hesochietsuat;
        double hesosuyhao;
        string dacdiemchinh;
    public:
        vatlieu() {}
        ~vatlieu() {}
        double getHSSH() {
            return hesosuyhao;
        }

        
    void inThongTin() {
        cout << "Vật liệu: " << ten << ", hệ số chiết suất: " << hesochietsuat
         << ", hệ số suy hao: " << hesosuyhao << endl;
    }
};

class silica : public vatlieu {
    public:
        silica() : vatlieu() {
            ten = "Silica";
            hesochietsuat = 1.46;
            hesosuyhao = 0.2;
        }
        ~silica() {}
};

class PMMA : public vatlieu {
    public:
        PMMA() : vatlieu() {
            ten = "PMMA";      
            hesochietsuat = 1.49;
            hesosuyhao = ran(1, 10);
        }
}; 

class thuytinh : public vatlieu {   
    public: 
        thuytinh() : vatlieu() {
            ten = "Thuy tinh";
            hesochietsuat = 1.5;
            hesosuyhao = ran(0.5, 1);
        }

        ~thuytinh() {}
};

class MMF : public vatlieu, public nguonsang {
    public:
        double chieudai;
        double duongkinh;
        vatlieu* chatlieu;
        nguonsang* n[2];
    public:
        MMF() {
            n[1] = nullptr;
            n[0] = nullptr;
        }

        ~MMF() {}

        int tinhBuocSongTongHop() {
            return n[1] ? n[0]->getBSKH(n[1]) : n[0]->getBuocSong();
        }

        double tinhCuongDoTongHop() {
            return n[1] ? n[0]->getCD(n[1]) : n[0]->cuongdobandau();
        }

        double HSSHcuoicung() {
            return duongkinh * chatlieu->getHSSH();
        }

        double deltaCSSH() {
            return ( (n[1]->getCD() + n[2]->getCD()) - ( (n[1]->getCD() + n[2]->getCD()) * pow(10, - chatlieu->getHSSH() * chieudai / 10)));
        }

        void nhapthongtin() {
            cout << "Nhập chiều dài cáp quang (km): ";
            cin >> chieudai;
            cout << "Nhập đường kính cáp quang (micro met): ";
            cin >> duongkinh;
            cout << "Chọn loại vật liệu: " << endl;
            int chon1, chon2;
            cout << "1. Silca" << endl;
            cout << "2. PMMA" << endl;
            cout << "3. Thuỷ tinh thường" << endl;
            cin >> chon1;
            switch (chon1)
            {
                case 1:
                    chatlieu = new silica;
                    break;
                case 2:
                    chatlieu = new PMMA;
                    break;
                case 3:
                    chatlieu = new thuytinh;
                    break;
            }

            cout << endl;
            cout << "Nhập thông tin nguồn sáng thứ 1" << endl;
            cout << "1. Laser" << endl;
            cout << "2. LED" << endl;
            cout << "3. Ánh sáng trắng " << endl;

            cin >> chon2;
            switch (chon2)
            {
                case 1:
                    n[0] = new laser;
                    break;
                case 2:
                    n[0] = new led;
                    break;
                case 3:
                    n[0] = new astrang;
                    break;
            }
        }

        void inThongTin() const {
            cout << "\n=============================\n";
            cout << "Cáp quang: chiều dài = " << chieudai << " km, đường kính lõi = " << duongkinh << " um\n";
            chatlieu->inThongTin();
            cout << "Nguon sang 1:\n"; n[0]->inThongTin();
        }
};

int main() {
    vector<MMF*> v;
    int maxCSSH = 0, maxCSSH_i = -1;
    cout << "Nhap so luong cap quang: ";
    int n; cin >> n;
    v.resize(5);
    for(int i = 0; i < n; i++) {
        v[i]->nhapthongtin();
        double deltaCSSH_tmp = v[i]->deltaCSSH();
        if (deltaCSSH_tmp > maxCSSH) {
            maxCSSH = deltaCSSH_tmp;
            maxCSSH_i = i;
        }
    }

    //cau b
    cout << "\n=====================================\n";
    cout << "do lech cong suat suy hao cao nhat la: \n";
    v[maxCSSH_i]->inThongTin();

    //cau c
    for (int i = 0; i < n; i++) {
        int random = rand() % 3;
        if (random == 0) {
            v[i]->n[2] = new laser;
        }

        else if (random == 1) {
            v[i]->n[2] = new led;
        }

        else if (random == 2) {
            v[i]->n[2] = new astrang;
        }
    }
}