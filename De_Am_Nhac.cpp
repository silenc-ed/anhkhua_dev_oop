#include <iostream>
#include <vector>

using namespace std;

class Note {
protected:
    string caoDo;
    string truongDo;
public:
    Note(string cd = "Z", string td = "1");
    virtual bool checkLangDen();
    string getCaoDo();
    string getTruongDo();
    bool checkNote();
};

class Music : public Note {
private:
    vector<Note> v;
public:
    void soanNhac(string chuoi);
    void demLangDen();
    void timCaoNhat();
};

Note::Note(string cd, string td) {
    caoDo = cd;
    truongDo = td;
}

bool Note::checkLangDen() {
    return (caoDo == "Z" && truongDo == "1");
}

string Note::getCaoDo() {
    return caoDo;
}

string Note::getTruongDo() {
    return truongDo;
}

bool Note::checkNote() {
    string dsCaoDo[] = {"C", "D", "E", "F", "G", "A", "B", "Z"};
    string dsTruongDo[] = {"4", "2", "1", "1/2", "1/4", "1/8", "1/16"};
    bool cao = false, truong = false;

    for (int i = 0; i < 8; i++)
        if (caoDo == dsCaoDo[i]) cao = true;
    for (int i = 0; i < 7; i++)
        if (truongDo == dsTruongDo[i]) truong = true;

    return cao && truong;
}

void Music::soanNhac(string chuoi) {
    v.clear();
    int n = chuoi.length();
    string tmp = "";
    for (int i = 0; i <= n; i++) {
        if (i == n || chuoi[i] == ' ') {
            if (tmp != "") {
                string cd = "", td = "";
                int j = 0;
                while (j < tmp.length() && isalpha(tmp[j]))
                    cd += tmp[j++];
                td = tmp.substr(j);
                Note n(cd, td);
                if (n.checkNote()) {
                    v.push_back(n);
                }
                tmp = "";
            }
        } else {
            tmp += chuoi[i];
        }
    }
}

void Music::demLangDen() {
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].checkLangDen()) {
            count++;
            cout << "Vi tri note thu: " << i + 1 << endl;
        }
    }
    cout << "Tong cong co: " << count << " not lang den" << endl;
}

void Music::timCaoNhat() {
    string thuTu = "CDEFGAB";
    Note max("Z", "0");
    int maxI = -1;

    for (int i = 0; i < v.size(); i++) {
        string c = v[i].getCaoDo();
        if (c == "Z") continue;
        int index = thuTu.find(c);
        if (index > maxI) {
            maxI = index;
            max = v[i];
        }
    }

    if (maxI != -1)
        cout << max.getCaoDo() << max.getTruongDo() << endl;
    else cout << "NULL" << endl;
}

int main() {
    Music song;
    string s;
    cout << "Soan bai nhac (VD: C1 D1/2 E1/2 Z1 F2 ...): ";
    getline(cin, s);
    song.soanNhac(s);
    cout << "Dem so dau lang den (Z1): ";
    song.demLangDen();
    cout << "Not co cao do cao nhat: ";
    song.timCaoNhat();
    return 0;
}


