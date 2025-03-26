#include "Bai017_KeThuaGiaSuc.h"

int main() {
    srand(time(0));
    int numCows, numSheep, numGoats;
    int choice;

    do {
        cout << "\n===== MENU QUAN LY NONG TRAI =====\n";
        cout << "1. Nhap so luong gia suc ban dau\n";
        cout << "2. Xem so luong gia suc hien co\n";
        cout << "3. Xem tong so lit sua\n";
        cout << "4. Nghe tieng keu cua gia suc khi doi\n";
        cout << "5. Thoat\n";
        cout << "Chon chuc nang: ";
        cin >> choice;

        static Cow cows(0);
        static Sheep sheep(0);
        static Goat goats(0);

        switch (choice) {
        case 1:
            cout << "Nhap so luong bo, cuu, de ban dau: ";
            cin >> numCows >> numSheep >> numGoats;
            cows = Cow(numCows);
            sheep = Sheep(numSheep);
            goats = Goat(numGoats);
            cows.reproduce();
            sheep.reproduce();
            goats.reproduce();
            cout << "\nGia suc da duoc cap nhat va sinh san.\n";
            break;

        case 2:
            cout << "So luong gia suc hien co:\n";
            cout << "Bo: " << cows.getCount() << "\n";
            cout << "Cuu: " << sheep.getCount() << "\n";
            cout << "De: " << goats.getCount() << "\n";
            break;

        case 3:
        {
            cout << "Tong so lit sua bo : " << cows.produceMilk() << "\n";
            cout << "Tong so lit sua cuu: " << sheep.produceMilk() << "\n";
            cout << "Tong so lit sua de : " << goats.produceMilk() << "\n";
            int totalMilk = cows.produceMilk() + sheep.produceMilk() + goats.produceMilk();
            cout << "Tong so lit sua    : " << totalMilk << "\n";
        }
        break;

        case 4:
            cout << "Mot hom nguoi chu nong trai di vang, tat ca gia suc trong nong trai deu doi.\n";
            cout << "Am thanh nghe duoc trong nong trai: ";
            for (int i = 0; i < cows.getCount(); i++) cout << cows.getSound() << " ";
            for (int i = 0; i < sheep.getCount(); i++) cout << sheep.getSound() << " ";
            for (int i = 0; i < goats.getCount(); i++) cout << goats.getSound() << " ";
            cout << "\n";
            break;

        case 5:
            cout << "Thoat chuong trinh.\n";
            break;

        default:
            cout << "Lua chon khong hop le! Vui long thu lai.\n";
        }
    } while (choice != 5);

    return 0;
}

