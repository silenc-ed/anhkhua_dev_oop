#include "BaiKT_QuanLySinhVien.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "nhap so luong sinh vien: ";
    int n; 
    cin >> n;
    vector <quanli> v(n); 
    int max = 0, max_pp = -1;
    for (int i = 0; i < n; i++) {
        cout << "nhap thong tin sinh vien thu " << i + 1 << ": " << endl;
        quanli temp; 
        temp.nhap(); 
        v[i] = temp; 
    }
    
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << endl;
        v[i].xuat();
        cout << endl ;
        if (v[i].gpa() > max) {
            max_pp = i;
			max = v[i].gpa();
        }
    }
    if (max_pp != -1) { 
        cout << "diem GPA cao nhat cua: ";
        v[max_pp].xuat();
    } else {
        cout << "Khong co sinh vien nao duoc nhap." << endl; 
    }
}
