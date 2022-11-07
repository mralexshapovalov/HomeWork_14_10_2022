// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void FillRand(int* array,int minValue, int maxValue, int sizeArray)
{

 
    for (int i = 0; i < sizeArray; i++)
    {

        array[i] = rand() % (minValue - maxValue);
    }
    
 

}

void Print(int* array,int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }
    
}
void  Sum(int *array,int sizeArray) //возвращает сумму элементов массива
{
    int sum = 0;
    for (int i = 0; i < sizeArray; i++)
    
        sum += array[i];
  

    cout <<"Sum = " << sum << endl;
 
  
}
void Avg(int* array, int sizeArray) //возвращает среднее-арифметическое элементов массива
{

    int avg = 0;
    int sum = 0;
    for (int i = 0; i < sizeArray; i++)

        avg += array[i];
    sum = avg / sizeArray;

    cout << "avg = " << sum << endl;


}

void MinValueIn(int* array, int sizeArray) //возвращает минимальное значение из массива
{

    int min = array[0];
  
    for (int i = 0; i < sizeArray; i++) 
    

        if (array[i] < min) 
        {

            min = array[i];
            cout << "min = " << min << endl;
        }

}

void MaxValueIn() //возвращает максимальное значение из массива
{



}

void ShiftLeft() //выполняет циклический сдвиг массива на заданное число элементов влево
{

    cout << "Циклический сдвиг влево" << endl;
    cout << "Введите колличество элементов "; cin >> value;

    for (int i = 0; i < value; i++)
    {
        buffer = mas[0];

        for (int j = 0; j < size; j++)
        {
            mas[j] = mas[j + 1];

        }
        mas[size - 1] = buffer;
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << "\t";

    }
    
}

void ShiftRight() //выполняет циклический сдвиг массива на заданное число элементов вправо
{
    cout << "Циклический сдвиг вправо" << endl;
    cout << "Введите колличество элементов "; cin >> value;

    for (int i = 0; i < value; i++)
    {
        buffer = mas[size - 1];

        for (int j = size - 1; j >= 0; j--)
        {
            mas[j] = mas[j - 1];
        }
        mas[0] = buffer;
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << "\t";

    }
}

void Sort()  //выполняет сортировку массива в порядке возрастания
{



}


void UinqueRand()  //заполняет массив уникальными случайными числами в заданном диапазоне
{


}


void Search()  //находит в массиве повторяюшиеся значения, выводит их на экран
{



}




int main()
{

    int minValue, maxValue, sizeArray;


    cout << "Enter the minimum value : "; cin >> minValue;
    cout << "Enter the maximum value : "; cin >> maxValue;
    cout << "Enter the size array :";  cin >> sizeArray;
    int* array = new int[sizeArray]; //*Óêàçàòåëü(Çíàþ íå ïðîõîäèëè,íî ðåøèë ïîïðîáûâàòü)

   
        FillRand(array,minValue, maxValue, sizeArray);

    
  
    Print(array, sizeArray);
    
    Sum(array, sizeArray);

    Avg(array, sizeArray);
    MinValueIn(array, sizeArray);
    

    
    delete[] array;
}

