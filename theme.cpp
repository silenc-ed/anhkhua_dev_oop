#include "Bai008_Class_Date.h"
#include <iostream>

using namespace std;

int main() {
    Date n;

    while (1) {
        cout << "---------------------------- \n";
        cout << "chon viec ban muon lam: \n";
        cout << "---------------------------- \n";
        cout << "1. check nam nhuan \n";
        cout << "2. in ngay trong thang \n";
        cout << "3. doan ngay thu n tiep theo \n";
        cout << "4. thoat \n";
        cout << "---------------------------- \n";
        cout << "nhap so: ";
        int x;

        while (!(cin >> x) || !(x > 0 && x < 4)) {
            cout << "nhap lai di dcmm: ";
            cin >> x;
        }

        if (x == 1) {
            cout << "---------------------------- \n";
        }

        else if (x == 2) {
            cout << "---------------------------- \n";
            
        }
        
        else if (x == 3) {
            cout << "---------------------------- \n";
            
        }

        else if (x == 4) {
            cout << "---------------------------- \n";
            cout << "chet me may di!!";
            return 0; 
        }
    }
}