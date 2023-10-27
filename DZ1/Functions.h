#include <iostream>
#include <random>
using namespace std;

template<typename T>
void Initial(T Array, size_t Array_Size) {

    for (int Temp = 0; Temp < Array_Size; Temp++) {
        Array[Temp] = rand() % 100 + 1;
    }
}

template<typename T>
void Print(T Array, size_t Array_Size) {

    for (int Temp = 0; Temp < Array_Size; Temp++) {
        cout << "[" << Array[Temp] << "] ";
    }
    cout << endl;
    cout << endl;
}

template<typename T>
void MaxAndMin(T Array, size_t Array_Size) {

    int Minimal = Array[0], Maximum = Array[Array_Size - 1];
    for (int Temp = 0; Temp < Array_Size; Temp++) {
        if (Minimal > Array[Temp])
            Minimal = Array[Temp];
        else if (Maximum < Array[Temp])
            Maximum = Array[Temp];
    }
    cout << "Максимальный элемент: " << Maximum << endl;
    cout << "Минимальный элемент: " << Minimal << endl;
    cout << endl;
}

template<typename T>
void Sort(T Array, size_t Array_Size) {
    for (int Temp1 = Array_Size - 1; Temp1 > 0; Temp1--) {
        for (int Temp = 0; Temp < Temp1; Temp++) {
            if (Array[Temp] > Array[Temp + 1]) {
                swap(Array[Temp], Array[Temp + 1]);
            }
        }
    }
}

template<typename T>
void BinarySearch(int Number, T Array, size_t Array_Size) {
    int Middle = 0;
    int Right = Array_Size;
    int Left = 0;
    while (1){
        Middle = (Left + Right) *0.5;

        if (Number < Array[Middle])
            Right = Middle - 1;
        else if (Number > Array[Middle])
            Left = Middle + 1;
        else {
            cout << "Ваше число на позиции: " << Middle+1;
            cout << endl << endl;
            break;
        }

        if (Left > Right) {
            cout << "Такого числа нет в данном массиве" << endl << endl;
            break;
        }
    }
}

template<typename T>
void SwitchElement(T Array, size_t Array_Size, int Element, int Number) {
    Array[Element-1] = Number;
}