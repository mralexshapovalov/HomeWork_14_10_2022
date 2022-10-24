// Hex numeration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

using namespace std;

int value;

void DecHex(int ch)
{
    const unsigned size = 16;

    string tackung_string_value;
    int tacking_value;
    char synbol [size + 1] = { "0123456789ABCDEF" };
    while (ch)
    {
        tacking_value = ch % size;
        ch /= size;
        tackung_string_value = synbol[tacking_value] + tackung_string_value;
    }
    cout <<"В шестнадцатиричной системы счисления  - " << tackung_string_value;

}



int main()
{
	setlocale(LC_ALL, "rus");
   
    cout << "Введите число в десятичной системе счисления : "; cin >> value;
    cout << "Перевод числа из десятичной системы счисление  - " << value; 
    DecHex(value);

}
 


