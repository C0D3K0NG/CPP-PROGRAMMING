/*Write down a program on C++ to define a class Matrix which uses a 2D array and two variable
rlimit and climit to hold the row size and column size of the matrix. Your Matrix class should contain-i.
i.Copy constructor
ii.Dynamic constructor to allocate memory space for matrix.
iii.Member function for addition of two matrices and store it in another matrix.
iv.Destructor*/
#include <iostream>
using namespace std;

class Matrix {
private:
    int** mat;
    int rlimit;
    int climit;

public:
    // Dynamic constructor
    Matrix(int r, int c) {
        rlimit = r;
        climit = c;
        mat = new int*[rlimit];
        for (int i = 0; i < rlimit; ++i) {
            mat[i] = new int[climit];
        }
    }

    // Copy constructor
    Matrix(const Matrix& m) {
        rlimit = m.rlimit;
        climit = m.climit;
        mat = new int*[rlimit];
        for (int i = 0; i < rlimit; ++i) {
            mat[i] = new int[climit];
            for (int j = 0; j < climit; ++j) {
                mat[i][j] = m.mat[i][j];
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rlimit; ++i) {
            delete[] mat[i];
        }
        delete[] mat;
    }

    // Function to input matrix values
    void input() {
        cout << "Enter elements of " << rlimit << "x" << climit << " matrix:\n";
        for (int i = 0; i < rlimit; ++i) {
            for (int j = 0; j < climit; ++j) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to display matrix
    void display() const {
        for (int i = 0; i < rlimit; ++i) {
            for (int j = 0; j < climit; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to add two matrices
    void add(const Matrix& m1, const Matrix& m2) {
        if (m1.rlimit != m2.rlimit || m1.climit != m2.climit) {
            cout << "Matrix dimensions do not match!" << endl;
            return;
        }

        rlimit = m1.rlimit;
        climit = m1.climit;

        // Deallocate existing matrix if needed
        if (mat != nullptr) {
            for (int i = 0; i < rlimit; ++i) {
                delete[] mat[i];
            }
            delete[] mat;
        }

        mat = new int*[rlimit];
        for (int i = 0; i < rlimit; ++i) {
            mat[i] = new int[climit];
            for (int j = 0; j < climit; ++j) {
                mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
            }
        }
    }
};

int main() {
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    Matrix m1(r, c), m2(r, c), m3(r, c);

    cout << "\nMatrix 1:\n";
    m1.input();

    cout << "\nMatrix 2:\n";
    m2.input();

    m3.add(m1, m2);

    cout << "\nResultant Matrix after addition:\n";
    m3.display();

    return 0;
}
