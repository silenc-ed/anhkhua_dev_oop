#include <iostream>

using namespace std;

class kihieu {
    private:
        double truongdo;
    public:
        kihieu(double truongdo = 0);
        ~kihieu() {};
        virtual void nhap();
        virtual double getTruongDo();
        virtual bool isLangDen();
};

class notnhac : public kihieu{
    private:
        char caodo;
    public:
        char getCaoDo();
        void nhap();
};

class daulang : public kihieu{
    public:
        bool isLangDen();
        char getCaoDo();
};

kihieu::kihieu(double truongdo) {
    this->truongdo = truongdo;
}

kihieu::~kihieu() {}

void kihieu::nhap() {
    cout << "Nhap truong do: ";
    cin >> truongdo;
}

void notnhac::nhap() {
    kihieu::nhap();
    cout << "Nhap cao do: ";
    cin >> caodo; 
}

char daulang::getCaoDo() {
    return 'Z';
}

char notnhac::getCaoDo() {
    return caodo;
}

bool daulang::isLangDen() {
    return getTruongDo() == 1;
}


 
int main() {
    
}