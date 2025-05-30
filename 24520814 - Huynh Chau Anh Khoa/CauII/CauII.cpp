#include <bits/stdc++.h>

using namespace std;

class kimloai;

class oxi {
    private:
        double v;
    public:
        double n() {
            return v / 22.4;
        }

        void setV(int n) {
            v = n;
        }

        double soMolKLCanThiet(kimloai *kl);
};

class kimloai {
    protected:
        double m;
    public:
        kimloai() {}
        virtual ~kimloai() {}
        virtual void nhap() {
            cout << "Nhap khoi luong: ";
            cin >> m;
        }
        virtual void xuat() = 0;
        virtual double getTL() = 0;
        virtual double n() = 0;
        virtual double oxit(oxi &o) = 0;
        virtual double soMolOxiCanThiet(oxi o) {
            return (n() * (1 / getTL()));
        }
};

class fe : public kimloai {
    protected:
        double M = 55.85;
        double TL = 4.0 / 3;
    public: 
        double n() {
            return m / M;
        }

        double getTL() {
            return TL;
        }

        double oxit(oxi &o) override {
            double k = o.n() * TL;
            double n_KLPU = min(n(), k); 
            return n_KLPU * 159.7;
        }

        void xuat() override {
            cout << "Fe: " << m << " gam\n";
        }        
};

class cu : public kimloai {
    protected:
        double M = 63.55;
        double TL = 4.0 / 3;
    public: 
        double n() {
            return m / M;
        }

        double getTL() {
            return TL;
        }

        double oxit(oxi &o) override {
            double k = o.n() * TL;
            double n_KLPU = min(n(), k); 
            return n_KLPU * 79.55;
        }

        void xuat() override {
            cout << "Cu: " << m << " gam\n";
        }
};

class al : public kimloai {
    protected:
        double M = 26.98;
        double TL = 4.0 / 3;
    public: 
        double n() {
            return m / M;
        }
        
        double getTL() {
            return TL;
        }

        double oxit(oxi &o) override {
            double k = o.n() * TL;
            double n_KLPU = min(n(), k); 
            return (n_KLPU / 2) * 101.96;
        }

        void xuat() override {
            cout << "Al: " << m << " gam\n";
        }
};

double oxi::soMolKLCanThiet(kimloai* kl) {
    return (n() * kl->getTL());
}

int main() {
    vector<kimloai*> ds;

    oxi o;
    o.setV(8.96);

    while (true) {
        cout << "\nNhap kim loai se tham gia phan ung:\n";
        cout << "1. Fe\n";
        cout << "2. Cu\n";
        cout << "3. Al\n";
        cout << "0. Ket Thuc\n";
        cout << "Lua chon: ";
        int choice;
        cin >> choice;

        if (choice == 0) break;

        kimloai* kl = nullptr;
        if (choice == 1) kl = new fe();
        else if (choice == 2) kl = new cu();
        else if (choice == 3) kl = new al();
        else {
            cout << "Lua chon khong hop le!\n";
            continue;
        }

        kl->nhap();
        ds.push_back(kl);
    }

    if (ds.empty()) {
        cout << "Khong co kim loai nao duoc nhap.\n";
        return 0;
    }

    double max_oxit = -1;
    int index_max = -1;

    for (int i = 0; i < ds.size(); ++i) {
        double oxit_kl = ds[i]->oxit(o);
        if (oxit_kl > max_oxit) {
            max_oxit = oxit_kl;
            index_max = i;
        }
    }

    int count_gioi_han = 0;
    for (auto kl : ds) {
        if (kl->n() < o.soMolKLCanThiet(kl)) {
            count_gioi_han++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\n-----------------------------------------------\n";
    cout << "Khoi luong oxit lon nhat: " << max_oxit << " gam\n";
    cout << "So luong kim loai mol thuc te nho hơn so mol can thiet cho phan ung: " << count_gioi_han << "\n";

    for (auto kl : ds) delete kl;

    return 0;
}
