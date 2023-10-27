#include <iostream> 
#include <random> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

template <typename T>
class Matrix {
private:
    int rows, cols;
    T** data;

public:
    float a = 0, b = 0;

    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data = new T * [rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new T[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete data[i];
        }
        delete[] data;
    }

    void fillFromKeyboard() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Введите " << i + j+1 << " элемент матрицы: ";
                cin >> data[i][j];
            }
        }
    }

    void fillRandomly() {
        srand(time(NULL));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                data[i][j] = rand() % 100;
            }
        }
    }

    void display() const {
        cout << "Матрица: " << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << " [" << data[i][j] << "]";
            }
            cout << endl;
        }
    }

    int Max() {
        int max=-1;
    
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (max < data[i][j]) {
                    max = data[i][j];
                }
            }
        }

        return max;
    }

    int Min() {
        int min=999999;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (min > data[i][j]) {
                    min = data[i][j];
                }
            }
        }

        return min;
    }

    Matrix<float> operator+(const Matrix<float>& other) {
        
        return Matrix<float>(a + other.a, b + other.b);
    }

    Matrix<float> operator-(const Matrix<float>& other) const {
        return Matrix<float>(a - other.a, b - other.b);
    }

    Matrix<float> operator*(const Matrix<float>& other) const {
        return Matrix<float>(a * other.a, b * other.b);
    }

    Matrix<float> operator/(const Matrix<float>& other) const {
        return Matrix<float> (a / other.a, b / other.b);
    }

    Matrix<float>& operator=(const Matrix<float>& other) {
        if (this == &other) {
            return *this;
        }

        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;

        rows = other.rows;
        cols = other.cols;
        data = new T * [rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new T[cols];
            for (int j = 0; j < cols; j++) {
                data[i][j] = other.data[i][j];
            }
        }

        return *this;
    }

};