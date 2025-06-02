#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class piece {
protected:
    int id = 0;
public:
    vector<vector<bool>> p;
    piece() {
        p.resize(4, vector<bool>(4, false));
    }
    ~piece() {}

    void xuat() {
        cout << "+---+---+---+---+\n";
        for (int i = 0; i < 4; i++) {
            cout << "|";
            for (int j = 0; j < 4; j++) {
                if (p[i][j]) cout << " X |";
                else cout << " . |";
            }
            cout << endl;
            for (int k = 0; k < 4; k++) {
                cout << "+---";
            }
            cout << "+" << endl;
        }
    }

    virtual void rotate() {
        return;
    };
};

class I : public piece {
public:
    I() : piece() {
        for (int i = 0; i < 4; i++) {
            p[i][0] = true;
        }
    }
    ~I() {};

    void rotate() {
        for (int i = 0; i < 4; i++) {
            swap(p[i][0], p[0][i]);
        }
    }

};

class LL : public piece {
private:
    vector<vector<vector<bool>>> a;
public:
    LL() : piece() {
        a.resize(4);
        a[0] = { {0,1,0,0}, {0,1,0,0}, {1,1,0,0}, {0,0,0,0} };
        p = a[0];
        a[1] = { {1,0,0,0}, {1,1,1,0}, {0,0,0,0}, {0,0,0,0} };
        a[2] = { {1,1,0,0}, {1,0,0,0}, {1,0,0,0}, {0,0,0,0} };
        a[3] = { {1,1,1,0}, {0,0,1,0}, {0,0,0,0}, {0,0,0,0} };
    }

    ~LL() {};

    void rotate() {
        id++;
        id = id % 4;
        p = a[id];
    }
};

class LR : public piece {
private:
    vector<vector<vector<bool>>> a;
public:
    LR() : piece() {
        a.resize(4);
        p = { {1,0,0,0}, {1,0,0,0}, {1,1,0,0}, {0,0,0,0} };
        a[0] = p;
        a[1] = { {1,1,1,0}, {1,0,0,0}, {0,0,0,0}, {0,0,0,0} };
        a[2] = { {1,1,0,0}, {0,1,0,0}, {0,1,0,0}, {0,0,0,0} };
        a[3] = { {0,0,1,0}, {1,1,1,0}, {0,0,0,0}, {0,0,0,0} };
    }

    ~LR() {};

    void rotate() {
        id++;
        id = id % 4;
        p = a[id];
    }
};

class SQ : public piece {
public:
    SQ() : piece() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                p[i][j] = true;
            }
        }
    }

    ~SQ() {};

};

class ZL : public piece {
private:
    vector<vector<vector<bool>>> a;
public:
    ZL() : piece() {
        a.resize(2);
        p = { {0, 1, 1, 0}, {1, 1, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} };
        a[0] = p;
        a[1] = { {1,0, 0, 0}, {1, 1, 0, 0}, {0,1, 0, 0}, {0, 0, 0, 0} };
    }

    ~ZL() {};

    void rotate() {
        id++;
        id = id % 2;
        p = a[id];
    }
};

class ZR : public piece {
private:
    vector<vector<vector<bool>>> a;
public:
    ZR() : piece() {
        a.resize(2);
        p = { {1,1,0,0}, {0,1,1,0}, {0,0,0,0}, {0,0,0,0} };
        a[0] = p;
        a[1] = { {0,1,0,0}, {1,1,0,0}, {1,0,0,0}, {0,0,0,0} };
    }

    ~ZR() {};

    void rotate() {
        id++;
        id = id % 2;
        p = a[id];
    }
};

class T : public piece {
private:
    vector<vector<vector<bool>>> a;
public:
    T() : piece() {
        a.resize(4);
        p = { {1,1,1,0}, {0,1,0,0}, {0,0,0,0}, {0,0,0,0} };
        a[0] = p;
        a[1] = { {1,0,0,0}, {1,1,0,0}, {1,0,0,0}, {0,0,0,0} };
        a[2] = { {0,1,0,0}, {1,1,1,0}, {0,0,0,0}, {0,0,0,0} };
        a[3] = { {0,1,0,0}, {1,1,0,0}, {0,1,0,0}, {0,0,0,0} };
    }

    ~T() {};

    void rotate() {
        id++;
        id = id % 4;
        p = a[id];
    }
};

class tetris : public piece {
protected:
    vector<vector<bool>> board;
public:
    tetris() {
        board.resize(8, vector<bool>(10, false));
    }

    void xuat() {
        cout << "+---+---+---+---+---+---+---+---+---+---+\n";
        for (int i = 0; i < 8; i++) {
            cout << "|";
            for (int j = 0; j < 10; j++) {
                if (board[i][j]) cout << " X |";
                else cout << " . |";
            }
            cout << endl;
            for (int k = 0; k < 10; k++) {
                cout << "+---";
            }
            cout << "+" << endl;
        }
    }

    bool place(int ib, int jb, piece* tmp) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if ((tmp->p[i][j] && ((ib + i > 7) || (jb + j > 9))) || (tmp->p[i][j] && board[ib + i][jb + j])) {
                    cout << "Error!\n";
                    return false;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (tmp->p[i][j] && ib + i < 8 && jb + j < 10) board[ib + i][jb + j] = tmp->p[i][j];
            }
        }
        return true;
    }

    long long score() {
        int res = 0;
        for (int i = 0; i < 8; i++) {
            bool col = true;
            int res_tmp = 0;
            for (int j = 0; j < 10; j++) {
                if (board[i][j]) res_tmp += 4;
                else col = false;
            }
            if (col) res_tmp *= 4;
            res += res_tmp;
        }
        return res;
    }
};

int main() {
    srand(time(0));
    tetris* board = new tetris;
    int count = 0;

    while (count++ < 26) {
        board->xuat();
        piece* tmp = nullptr;
        int random = rand() % 7;
        cout << random << endl;
        if (random == 0) tmp = new I;
        else if (random == 1) tmp = new LL;
        else if (random == 2) tmp = new LR;
        else if (random == 3) tmp = new SQ;
        else if (random == 4) tmp = new ZL;
        else if (random == 5) tmp = new ZR;
        else if (random == 6) tmp = new T;

        while (1) {
            cout << "\n====================================\n";
            tmp->xuat();
            cout << "Chon hanh dong: \n";
            cout << "1. Dat\n";
            cout << "2. Xoay\n";
            cout << "3. Bo\n";

            int ch;
            cin >> ch;

            if (ch == 1) {
                cout << "nhap vi tri: ";
                int i, j;
                cin >> i >> j;
                while (!board->place(i, j, tmp)) {
                    cout << "1. Nhap lai\n";
                    cout << "2. Bo qua\n";
                    cout << "Nhap: ";
                    cin >> ch;
                    if (ch == 1) {
                        cout << "Nhap: ";
                        cin >> i >> j;
                    }
                    else break;
                }
                cout << "Da dat thanh cong\n";
                break;
            }

            else if (ch == 2) {
                tmp->rotate();
                cout << "Da xoay thanh cong \n";
            }

            else {
                break;
            }
        }
    }

    cout << "\n================================\n";
    cout << "Tong diem la: " << board->score();

}