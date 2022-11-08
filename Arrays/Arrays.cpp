// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void FillRand(int* array, double minValue, int maxValue, int sizeArray)
{


    for (int i = 0; i < sizeArray; i++)
    {

        array[i] = minValue + rand() * (maxValue - minValue) / RAND_MAX;
    }



}

void Print(int* array, int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }

}
void  Sum(int* array, int sizeArray) //возвращает сумму элементов массива
{
    int sum = 0;
    for (int i = 0; i < sizeArray; i++)

        sum += array[i];


    cout << "Sum = " << sum << endl;


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
    int m=0;
    for (int i = 0; i < sizeArray; i++) 
    {


        if (array[i] > min)
            m = i;

        min = array[m];

        cout << "min = " << min << m << endl;


    }
    
    

        

    


       
    
}

void MaxValueIn(int* array, int sizeArray) //возвращает максимальное значение из массива
{

    int min = array[0];
    int type;
    for (int i = 0; i < sizeArray; i++) 
    {
        if (array[i] > min)
        {

            min = array[i];
            type = i;
        }
    }
    cout << "min = " << min << "-" << type << endl;

     
 

   


}

void ShiftLeft(int* array, int sizeArray) //выполняет циклический сдвиг массива на заданное число элементов влево
{
    int value;
    cout << "Cycle shift left" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++)
    {
        int buffer = array[0];

        for (int j = 0; j < sizeArray; j++)
        {
            array[j] = array[j + 1];

        }
        array[sizeArray - 1] = buffer;

    }
    cout << endl;

    for (int i = 0; i < sizeArray; i++)
    {
        cout << array[i] << "\t";

    }

}

void ShiftRight(int* array, int sizeArray) //выполняет циклический сдвиг массива на заданное число элементов вправо
{
    int value;
    cout << "Cycle shift Right" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++)
    {
        int  buffer = array[sizeArray - 1];

        for (int j = sizeArray - 1; j >= 0; j--)
        {
            array[j] = array[j - 1];
        }
        array[0] = buffer;
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < sizeArray; i++)
    {
        cout << array[i] << "\t";

    }
}

void Sort(int* array, int sizeArray)  //выполняет сортировку массива в порядке возрастания
{
    int emptyValue;

    for (int i = 0; i <= sizeArray; i++)
    {

        for (int j = i + 1; j <= sizeArray; j++)
        {

            if (array[i] > array[j])
            {

                emptyValue = array[i];

                array[i] = array[j];

                array[j] = emptyValue;
            }

        }

    }

    for (int i = 0; i <= sizeArray; i++)
    {

        cout << array[i] << "\t";

    }

}


void UinqueRand(int* array, int sizeArray)  //заполняет массив уникальными случайными числами в заданном диапазоне
{


}


void Search(int* array, int sizeArray)  //находит в массиве повторяюшиеся значения, выводит их на экран
{
    int sum = 0;
    for (int i = 0; i < sizeArray; i++)
    {
       
        for (int j = i + 1; j < sizeArray; j++)
        {
            if (array[i] == array[j])
            {
                
                cout << array[i]<< "\t";

            }
        }
    }
}




int main()
{

    int minValue, maxValue, sizeArray;


    cout << "Enter the minimum value : "; cin >> minValue;
    cout << "Enter the maximum value : "; cin >> maxValue;
    cout << "Enter the size array :";  cin >> sizeArray;
    int* array = new int[sizeArray]; //*Óêàçàòåëü(Çíàþ íå ïðîõîäèëè,íî ðåøèë ïîïðîáûâàòü)


    int type;






    FillRand(array, minValue, maxValue, sizeArray);
    Print(array, sizeArray);

    cout << endl;
    cout << "Select an action :" << endl;
    cin >> type;


    switch (type)
    {

    case 1:
        Sum(array, sizeArray);
        break;

    case 2:
        Avg(array, sizeArray);
        break;

    case 3:
        MinValueIn(array, sizeArray);
        break;

    case 4:
        MaxValueIn(array, sizeArray);
        break;

    case 5:
        ShiftLeft(array, sizeArray);
        break;

    case 6:
        ShiftRight(array, sizeArray);
        break;

    case 7:
        Sort(array, sizeArray);
        break;

    case 9:
        Search(array, sizeArray);
        break;



    default:
        break;
    }




    delete[] array;
}

