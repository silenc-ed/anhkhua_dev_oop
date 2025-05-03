#include <iostream>
#include <vector>

using namespace std;

class kihieu {
    private:
        float truongDo;
    public:
        virtual ~kihieu() {};
        virtual void nhap();
        virtual bool isLangDen();
        virtual char getCaoDo() = 0;
        virtual float getTruongDo();
};

class notnhac : public kihieu {
    private:
        char caoDo;
    public:
        void nhap();
        char getCaoDo();
};

class daulang : public kihieu {
    public:
        bool isLangDen();
        char getCaoDo();
        void nhap();
};

void kihieu::nhap() {
    cout << "nhap truong do: ";
    cin >> truongDo;
}

void notnhac::nhap() {
    cout << "nhap not nhac (C - D - E - F - G - A - B): ";
    cin >> caoDo;
    kihieu::nhap();
}

char notnhac::getCaoDo() {
    return caoDo;
}

char daulang::getCaoDo() {
    return 'Z';
}

float kihieu::getTruongDo() {
    return truongDo;
}

bool kihieu::isLangDen() {
    return (getCaoDo() == 'Z' && getTruongDo() == 1);
}

bool daulang::isLangDen() {
    return (getCaoDo() == 'Z' && getTruongDo() == 1);
}

void daulang::nhap() {
    kihieu::nhap(); 
}

void count_langden(vector <kihieu*>& bannhac) {
    int cnt = 0;
    for (int i = 0; i < bannhac.size(); i++) {
        if (bannhac[i]->isLangDen()) {
            cout << "not lang den o vi tri thu: " << i + 1 << endl;
            cnt++;
        }  
    }
    cout << "tong so not lang den la: " << cnt << endl;
}

void find_highest(vector<kihieu*>& bannhac) {
    string s = "ZCDEFGAB";
    int max = -1;
    kihieu* maxNote = nullptr;
    for (int i = 0; i < bannhac.size(); i++) {
        int indexNote = s.find(bannhac[i]->getCaoDo());
        if (indexNote > max) {
            maxNote = bannhac[i];
            max = indexNote;
        }
    }

    cout << "not cao nhat trong bai nhac la: " << maxNote->getCaoDo() << maxNote->getTruongDo() << endl;
}

int main() {
    vector <kihieu*> bannhac;
    cout << "soan bai hat:\n";
    while (1) {
        cout << "1. them not nhac\n";
        cout << "2. them dau lang\n";
        cout << "3. ket thuc\n";
        cout << "chon: ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            kihieu* tmp = new notnhac();
            tmp->nhap();
            bannhac.push_back(tmp);
        }
        else if (choice == 2) {
            kihieu* tmp = new daulang();
            tmp->nhap();
            bannhac.push_back(tmp);
        }
        else if (choice == 3) {
            break;
        }
    }

    count_langden(bannhac);
    find_highest(bannhac);

    for (auto k : bannhac)
    delete k;
}