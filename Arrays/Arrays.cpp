// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

void FillRand(int array[], int minValue, int maxValue, const int sizeArray);
void FillRand(double array[], double minValue, double maxValue, const int sizeArray);
void FillRand(float  array[], float minValue, float maxValue, const int sizeArray);
void FillRand(char*  array, int minValue, int maxValue, const int sizeArray);





void Print(int array[], int  sizeArray); //выводит массив на экран
void Print(double array[], int  sizeArray); //выводит массив на экран
void Print(float  array[], int  sizeArray); //выводит массив на экран
void Print(char*  array, int  sizeArray); //выводит массив на экран



//void Sum(int* array, int sizeArray); //возвращает сумму элементов массива
//
//
//void Avg(int* array, int sizeArray); //возвращает среднее-арифметическое элементов массива
//
//void MinValueIn(int* array, int sizeArray); //возвращает минимальное значение из массива
//
//
//void MaxValueIn(int* array, int sizeArray); //возвращает максимальное значение из массива
//
//
//
//void ShiftLeft(int* array, int sizeArray); //выполняет циклический сдвиг массива на заданное число элементов влево
//
//
//void ShiftRight(int* array, int sizeArray); //выполняет циклический сдвиг массива на заданное число элементов вправо
//
//
//void Sort(int* array, int sizeArray); //выполняет сортировку массива в порядке возрастания
//
//
//
//void UinqueRand(int* array, int sizeArray);  //заполняет массив уникальными случайными числами в заданном диапазоне
//
//
//void Search(int* array, int sizeArray);  //находит в массиве повторяюшиеся значения, выводит их на экран




int main()
{

    const int sizeArray = 10;



    int minValueINT = 0.0f;
    int maxValueINT = 100.0f;
    int arrayINT[sizeArray];

    float minValuefloat = 0;
    float maxValuefloat = 100;
    float arrayfloat[sizeArray];

    int minValuechar = 0;
    int maxValuechar = 100;
    char* arraychar=new char[sizeArray];



    double minValue = 0;

    double maxValue = 100;





    double array[sizeArray];


    FillRand(arrayINT, minValueINT, maxValueINT, sizeArray);
    FillRand(array, minValue, maxValue, sizeArray);
    FillRand(arrayfloat, minValuefloat, maxValuefloat, sizeArray);
     FillRand(arraychar, minValuechar, maxValuechar, sizeArray);

    cout << endl;
   Print(arrayINT, sizeArray);
    cout << endl;
    Print(array, sizeArray);
    cout << endl;
    Print(arrayfloat, sizeArray);
    cout << endl;
    Print(arraychar, sizeArray);

   /* cout << endl;
    cout << "1.Return the sum of the array elements " << endl;
    cout << "2.Return the arithmetic mean of the array elements " << endl;
    cout << "3.Return the minimum value of the array " << endl;
    cout << "4.Return the maximum value of the array " << endl;
    cout << "5.Perform a cyclic shift of the array by a specified number of elements to left  " << endl;
    cout << "6.Perform a cyclic shift of the array by a specified number of elements to right " << endl;
    cout << "7.Sort the array through Bubble sorting " << endl;
    cout << "9.Find dublicate values in the array and display them on the screen " << endl;

    cout << endl;*/
    ///*  cout << "Select an action : ";  cin >> type;

    // switch (type)
    //  {

    //  case 1:
    //     

    //      break;

    //  case 2:
    //      Avg(array, sizeArray);
    //      break;

    //  
    //  default:
    //      b*/reak;
    //  }

    delete[] arraychar;
}



void FillRand(int array[], int minValue, int maxValue, const int sizeArray)
{


    if (minValue > maxValue)
    {
        int buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;



    for (int i = 0; i < sizeArray; i++)
    {

        array[i] = rand() % int((maxValue - minValue) + minValue);
    }
}

void FillRand(double array[], double minValue, double maxValue, const int sizeArray)
{
    if (minValue > maxValue)
    {
        double buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;


    maxValue *= 100;
    minValue *= 100;
    for (int i = 0; i < sizeArray; i++)
    {

        array[i] = rand() % int((maxValue - minValue) + minValue);
        array[i] /= 100;
    }
}

void FillRand(float* array, float minValue, float maxValue, const int sizeArray)
{
    if (minValue > maxValue)
    {
        float buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;


    maxValue *= 100;
    minValue *= 100;
    for (int i = 0; i < sizeArray; i++)
    {

        array[i] = rand() * int((maxValue - minValue) + minValue);
        array[i] /= 100;
    }
}
void FillRand(char* array, int minValue, int maxValue, const int sizeArray)
{
    if (minValue > maxValue)
    {
        int buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;



    for (int i = 0; i < sizeArray; i++)
    {
    
        array[i] = rand() % int((maxValue - minValue) + minValue);
    
    }
    
   

    
}




void Print(int array[], const int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }

}
void Print(double array[], const int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }

}

void Print(float array[], const int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }

}

void Print(char* array, const int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }

}

//void  Sum(int* array, int sizeArray) //возвращает сумму элементов массива
//{
//    int sum = 0;
//    for (int i = 0; i < sizeArray; i++)
//
//        sum += array[i];
//
//
//    cout << "Sum of array elemetst = " << sum << endl;
//
//
//}
//void Avg(int* array, int sizeArray) //возвращает среднее-арифметическое элементов массива
//{
//
//    int temp = 0;
//    int sumElemnts = 0;
//    for (int i = 0; i < sizeArray; i++)
//    {
//        temp += array[i];
//        sumElemnts = temp / sizeArray;
//    }
//
//    cout << "The arithmetic mean of the elements  = " << sumElemnts << endl;
//
//}
//
//void MinValueIn(int* array, int sizeArray) //возвращает минимальное значение из массива
//{
//
//    int minElement = array[0];
//    int cell = 0;
//    for (int i = 0; i < sizeArray; i++)
//    {
//
//        if (array[i] < minElement)
//        {
//            cell = i;
//            minElement = array[cell];
//        }
//    }
//
//    cout << "Minimum value in the array = " << minElement << " " << "Cell" << "[" << cell << "]" << endl;
//}
//
//void MaxValueIn(int* array, int sizeArray) //возвращает максимальное значение из массива
//{
//
//    int maxElement = array[0];
//    int cell;
//    for (int i = 0; i < sizeArray; i++)
//    {
//        if (array[i] > maxElement)
//        {
//            cell = i;
//            maxElement = array[i];
//
//        }
//    }
//    cout << "Maximum value in the array = " << maxElement << " " << "Cell" << "[" << cell << "]" << endl;
//}
//
//void ShiftLeft(int* array, int sizeArray) //выполняет циклический сдвиг массива на заданное число элементов влево
//{
//    int value;
//    cout << "Cycle shift left" << endl;
//    cout << "Enter the number if items : "; cin >> value;
//
//    for (int i = 0; i < value; i++)
//    {
//        int buffer = array[0];
//
//        for (int j = 0; j < sizeArray; j++)
//        {
//            array[j] = array[j + 1];
//
//        }
//        array[sizeArray - 1] = buffer;
//
//    }
//    cout << "Performans a ciclic shift of the array by a specified number of elements to the left ";
//    for (int i = 0; i < sizeArray; i++)
//    {
//        cout << array[i] << "\t";
//    }
//
//}
//
//void ShiftRight(int* array, int sizeArray) //выполняет циклический сдвиг массива на заданное число элементов вправо
//{
//    int value;
//    cout << "Cycle shift Right" << endl;
//    cout << "Enter the number if items : "; cin >> value;
//
//    for (int i = 0; i < value; i++)
//    {
//        int  buffer = array[sizeArray - 1];
//
//        for (int j = sizeArray - 1; j >= 0; j--)
//        {
//            array[j] = array[j - 1];
//        }
//        array[0] = buffer;
//        cout << endl;
//    }
//    cout << "Performans a ciclic shift of the array by a specified number of elements to the righr ";
//    for (int i = 0; i < sizeArray; i++)
//    {
//        cout << array[i] << "\t";
//
//    }
//}
//
//void Sort(int* array, int sizeArray)  //выполняет сортировку массива в порядке возрастания
//{
//    int emptyValue;
//
//    for (int i = 0; i <= sizeArray; i++)
//    {
//        for (int j = i + 1; j <= sizeArray; j++)
//        {
//            if (array[i] > array[j])
//            {
//                emptyValue = array[i];
//                array[i] = array[j];
//                array[j] = emptyValue;
//            }
//        }
//    }
//
//    for (int i = 0; i <= sizeArray; i++)
//    {
//        cout << array[i] << "\t";
//    }
//
//}
//
//
//void UinqueRand(int* array, int sizeArray)  //заполняет массив уникальными случайными числами в заданном диапазоне
//{
//
//
//}
//
//
//void Search(int* array, int sizeArray)  //находит в массиве повторяюшиеся значения, выводит их на экран
//{
//    int type = 0;
//
//    for (int i = 0; i < sizeArray; i++)
//    {
//        for (int j = 0; j < sizeArray; j++)
//        {
//
//            if (i >= j)
//            {
//                continue;
//            }
//            if (array[i] == array[j])
//            {
//                for (int z = 0; z < i; z++)
//                {
//                    if (array[z] == array[i])
//                    {
//                        type = 1;
//                        break;
//                    }
//                }
//                if (type == 0)
//                {
//                    cout << array[i] << " ";
//                    break;
//                }
//
//
//            }
//
//        }
//    }
//}