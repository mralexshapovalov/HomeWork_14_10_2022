// Function_Pow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int POW  (int value_1, int value_2); //Возведение в степень
int Minus(int value_1, int value_2); //Вычитание
int Plus (int value_1, int value_2); //Сложение
int Mult (int value_1, int value_2); //Умножение
int Div  (int value_1, int value_2); //Деление

int main()
{
    setlocale(LC_ALL, "Rus");


    int value_1;
    int valie_2;

    cout << "Введите два значение : "; cin >> value_1; cin >> valie_2;
    cout << value_1 << " ^ " << valie_2 << " = " << POW(value_1, valie_2) << endl;
    cout << value_1 << " - " << valie_2 << " = " << Minus(value_1, valie_2) << endl;
    cout << value_1 << " + " << valie_2 << " = " << Plus(value_1, valie_2)  << endl;
    cout << value_1 << " * " << valie_2 << " = " << Mult(value_1, valie_2)  << endl;
    cout << value_1 << " / " << valie_2 << " = " << Div(value_1, valie_2)   << endl;

}

int POW(int value_1, int value_2)
{

    int temp = value_1;

    if (value_2 == 0)
    {
        return 1;
    }

    else if (value_2 >= 1)
    {
        for (int i = 1; i < value_2; i++)
        {
            value_1 *= temp;
        }
    }
    return value_1;



}

int Minus(int value_1, int value_2)
{

    return value_1 - value_2;
}
int Plus(int value_1, int value_2)
{
    return value_1 + value_2;

}
int Mult(int value_1, int value_2)
{

    return value_1 * value_2;
}

int Div(int value_1, int value_2)
{

    return value_1 / value_2;
}