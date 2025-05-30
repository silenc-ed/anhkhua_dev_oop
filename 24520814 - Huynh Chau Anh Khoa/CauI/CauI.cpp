#include <iostream>

using namespace std;

class matrix {
    private:
        int a[3][3];
    public:
        matrix() {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    a[i][j] = 0;
                }
            }
        }

        friend istream& operator>>(istream& in, matrix& arr) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    in >> arr.a[i][j];
                }
            }
            return in;
        }

        friend ostream& operator<<(ostream& os, matrix& arr) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    os << arr.a[i][j] << " ";
                }
                cout << endl;
            }
            return os;
        }

        matrix operator+(matrix& arr) {
            matrix c;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    c.a[i][j] = a[i][j] + arr.a[i][j];
                }
            }
            return c;
        }
        
        matrix operator-(matrix& arr) {
            matrix c;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    c.a[i][j] = a[i][j] - arr.a[i][j];
                }
            }
            return c;
        }
        
        matrix operator*(matrix& arr) {
            matrix c;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        for (int k = 0; k < 3; k++) {
                            c.a[i][j] += arr.a[k][j] * a[i][k]; 
                        }
                    }
                }
            return c;
        }
        
        matrix operator*(int n) {
            matrix c;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    c.a[i][j] = a[i][j] * n;
                }
            }
            return c;
        }

        friend matrix operator* (int n, matrix arr);
};

matrix operator* (int n, matrix arr) {
    matrix c;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c.a[i][j] = arr.a[i][j] * n;
        }
    }
    return c;
}

int main() {
    matrix a, b, c, d, e, f, g;
    cin >> a >> b;
    int n;
    cin >> n;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a * n;
    g = n * a;
    cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g;
} 