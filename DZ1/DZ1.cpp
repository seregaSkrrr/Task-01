#include <iostream>
#include <random>
#include "Functions.h"
#include "Matrix.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "");
    srand(time(NULL));

    const int Size = 20;
    int Array[Size];
    int _number;
    int number;

    cout << "Массив: ";
    Initial(Array, Size);
    Print(Array, Size);
    
    MaxAndMin(Array, Size);

    cout << "Отсортированный массив: ";
    Sort(Array, Size);    
    Print(Array, Size);
    cout << "Введите число для поиска: ";
    cin >> _number;
    BinarySearch(_number, Array, Size);

    cout << "Выберите номер какого элемента заменить: ";
    cin >> _number;
    cout << "Какое число поставить заместо: ";
    cin >> number;
    SwitchElement(Array, Size, _number, number);
    cout << "Исправленный массив: ";
    Print(Array, Size);

    
    Matrix<float> First(2,2);
    Matrix<float> Second(3,3);
    Matrix<float> Third(3,3);
    Matrix<float> Fourth(3,3);
    
    First.fillFromKeyboard();
    First.display();
    cout << endl << endl;
    cout << "Максимальный элемент: " << First.Max() << endl;
    cout << "Минимальный элемент: " << First.Min();
    cout << endl << endl;

    Second.fillRandomly();
    Third.fillRandomly();
    Second.display();
    cout << endl << endl;
    Third.display();
    cout << endl << endl;


    Fourth = First + Second;
    Fourth = First - Second;
    Fourth = First * Second;
    Fourth = First - Second;

}