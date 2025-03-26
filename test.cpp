#include <iostream>
#include <vector>
#include <string>

using namespace std;

class CHocSinh {
    private:
        static int count;
        int id;
        string name;
        string sex;
        int year;
        double gpa;

    public:
        CHocSinh(string name = "", string sex = "", int year = 0, double gpa = 0) {
            this->id = ++count;
            this->name = name;
            this->sex = sex;
            this->year = year;
            this->gpa = gpa;
        }

        int getAge() {
            return 2025 - year;
        }

        int getID() {
            return id;
        }

        string getName() {
            return name;
        }

        double getGPA() {
            return gpa;
        }

        void nhap() {
            cin.ignore();
            cout << "Nhap ten: ";
            getline(cin, name);
            cout << "Nhap gioi tinh: ";
            getline(cin, sex);
            cout << "Nhap nam sinh: ";
            cin >> year;
            while (year > 2025 || year < 1900) {
                cout << "Nam sinh khong hop le, hay nhap lai: ";
                cin >> year;
            }
            cout << "Nhap diem trung binh: ";
            cin >> gpa;
            while (gpa > 10 || gpa < 0) {
                cout << "Diem trung binh khong hop le, hay nhap lai: ";
                cin >> gpa;
            }
        }

        void xuat() {
            cout << "ID: " << id << endl;
            cout << "Ten: " << name << endl;
            cout << "Gioi tinh: " << sex << endl;
            cout << "Tuoi: " << getAge() << endl;
            cout << "Diem trung binh: " << gpa << endl;
        }

        static CHocSinh SoSanhGPA(CHocSinh a, CHocSinh b) {
            return (a.getGPA() >= b.getGPA()) ? a : b;
        }

        static CHocSinh SoSanhTuoi(CHocSinh a, CHocSinh b) {
            return (a.getAge() >= b.getAge()) ? a : b;
        }
};

int CHocSinh::count = 0;

int main() {
    vector<CHocSinh> danhSach;
    int chon;

    do {
        cout << "\n==================== MENU ====================" << endl;
        cout << "1. Nhap danh sach sinh vien" << endl;
        cout << "2. Xuat danh sach sinh vien" << endl;
        cout << "3. So sanh GPA cua 2 sinh vien" << endl;
        cout << "4. So sanh tuoi cua 2 sinh vien" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "=============================================" << endl;
        cout << "Chon chuc nang: ";
        cin >> chon;

        switch (chon) {
            case 1: {
                int n;
                cout << "Nhap so luong sinh vien: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "\nNhap sinh vien thu " << i + 1 << ":\n";
                    CHocSinh sv;
                    sv.nhap();
                    danhSach.push_back(sv);
                }
                break;
            }

            case 2: {
                cout << "\n=== DANH SACH SINH VIEN ===\n";
                for (size_t i = 0; i < danhSach.size(); i++) {
                    cout << "Sinh vien thu " << i + 1 << ":\n";
                    danhSach[i].xuat();
                    cout << "--------------------------------------\n";
                }
                break;
            }

            case 3: {
                int i, j;
                cout << "Nhap ID cua 2 sinh vien can so sanh GPA: ";
                cin >> i >> j;

                if (i > 0 && j > 0 && i <= danhSach.size() && j <= danhSach.size()) {
                    CHocSinh svMax = CHocSinh::SoSanhGPA(danhSach[i - 1], danhSach[j - 1]);
                    cout << "\nSinh vien co GPA cao hon la:\n";
                    svMax.xuat();
                } else {
                    cout << "ID khong hop le!\n";
                }
                break;
            }

            case 4: {
                int i, j;
                cout << "Nhap ID cua 2 sinh vien can so sanh tuoi: ";
                cin >> i >> j;

                if (i > 0 && j > 0 && i <= danhSach.size() && j <= danhSach.size()) {
                    CHocSinh svLonTuoi = CHocSinh::SoSanhTuoi(danhSach[i - 1], danhSach[j - 1]);
                    cout << "\nSinh vien lon tuoi hon la:\n";
                    svLonTuoi.xuat();
                } else {
                    cout << "ID khong hop le!\n";
                }
                break;
            }

            case 0:
                cout << "Thoat chuong trinh!\n";
                break;

            default:
                cout << "Lua chon khong hop le, vui long chon lai!\n";
        }
    } while (chon != 0);

    return 0;
}
