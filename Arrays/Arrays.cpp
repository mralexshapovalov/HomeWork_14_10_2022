// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

void FillRand(int* array, int minValue, int maxValue, const int sizeArray);
void FillRand(double* array, double minValue, double maxValue, const int sizeArray);
void FillRand(float*  array, float minValue, float maxValue, const int sizeArray);
void FillRand(char*  array, int minValue, int maxValue, const int sizeArray);

void Print(int* array, int  sizeArray); //выводит массив на экран
void Print(double* array, int  sizeArray); //выводит массив на экран
void Print(float*  array, int  sizeArray); //выводит массив на экран
void Print(char*  array, int  sizeArray); //выводит массив на экран

int Sum(int* array, int sizeArray); //возвращает сумму элементов массива
double Sum(double* array, int sizeArray); //возвращает сумму элементов массива
float Sum(float* array, int sizeArray); //возвращает сумму элементов массива

int Avg(int* array, int sizeArray); //возвращает среднее-арифметическое элементов массива
double Avg(double* array, int sizeArray); //возвращает среднее-арифметическое элементов массива
float Avg(float* array, int sizeArray); //возвращает среднее-арифметическое элементов массива

int MinValueIn(int* array, int sizeArray); //возвращает минимальное значение из массива
double MinValueIn(double* array, int sizeArray); //возвращает минимальное значение из массива
float MinValueIn(float* array, int sizeArray); //возвращает минимальное значение из массива

int MaxValueIn(int* array, int sizeArray); //возвращает максимальное значение из массива
double MaxValueIn(double* array, int sizeArray); //возвращает максимальное значение из массива
float MaxValueIn(float* array, int sizeArray); //возвращает максимальное значение из массива


int* ShiftLeft(int* array, int sizeArray); //выполняет циклический сдвиг массива на заданное число элементов влево
void ShiftRight(int* array, int sizeArray); //выполняет циклический сдвиг массива на заданное число элементов вправо
void Sort(int* array, int sizeArray); //выполняет сортировку массива в порядке возрастания
void UinqueRand(int* array, int sizeArray);  //заполняет массив уникальными случайными числами в заданном диапазоне
void Search(int* array, int sizeArray);  //находит в массиве повторяюшиеся значения, выводит их на экран


int main()
{

    const int sizeArray = 10;
    int type;


    int minValueInt = 0;
    int maxValueInt = 100;
    int* arrayInt = new int[sizeArray];

    int minValueDouble = 0;
    int maxValueDouble = 100;
    double* arrayDouble = new double[sizeArray];
 
    int minValueFloat = 0;
    int maxValueFloat = 100;
    float* arrayFloat=new float[sizeArray];

    int minValueChar = 0;
    int maxValueChar = 100;
    char* arrayChar=new char[sizeArray];

    int* arr = new int[sizeArray];
  
    FillRand(arrayInt, minValueInt, maxValueInt, sizeArray);
    FillRand(arrayDouble, minValueInt, maxValueInt, sizeArray);
    FillRand(arrayFloat, minValueFloat, maxValueFloat, sizeArray);
    FillRand(arrayChar, minValueChar, maxValueChar, sizeArray);

    cout <<"Output of an array with a data type int : "<< endl;
    Print(arrayInt, sizeArray);
    cout << endl;
    cout << "Output of an array with a data type double : " << endl;
    Print(arrayDouble, sizeArray);
    cout << endl;
    cout << "Output of an array with a data type float : " << endl;
    Print(arrayFloat, sizeArray);
    cout << endl;
    cout << "Output of an array with a data type char : " << endl;
    Print(arrayChar, sizeArray);
    cout << endl;
    cout << endl;
    cout << "1.Return the sum of the array elements " << endl;
    cout << "2.Return the arithmetic mean of the array elements " << endl;
    cout << "3.Return the minimum value of the array " << endl;
    cout << "4.Return the maximum value of the array " << endl;
    cout << "5.Perform a cyclic shift of the array by a specified number of elements to left  " << endl;
    cout << "6.Perform a cyclic shift of the array by a specified number of elements to right " << endl;
    cout << "7.Sort the array through Bubble sorting " << endl;
    cout << "9.Find dublicate values in the array and display them on the screen " << endl;
    
    cout << endl;
    cout << "Select an action : ";  cin >> type;

     switch (type)
      {

      case 1:
          cout << "Sum of the array elements : " << endl;
          cout <<"int    : " << Sum(arrayInt, sizeArray) << endl;
          cout <<"double : " << Sum(arrayDouble, sizeArray) << endl;
          cout <<"float  : " << Sum(arrayFloat, sizeArray) << endl;
          break;

      case 2:
          cout << "Arithmetic mean of the array elements :" << endl;
          cout << "int    : "<< Avg(arrayInt, sizeArray) << endl;
          cout << "double : "<< Avg(arrayDouble, sizeArray) << endl;
          cout << "float  : "<< Avg(arrayFloat, sizeArray) << endl;
          break;

      case 3:
          cout << "Minimum value of the array : " << endl;
          cout << "int    : " << MinValueIn(arrayInt, sizeArray) << endl;
          cout << "double : " << MinValueIn(arrayDouble, sizeArray) << endl;
          cout << "float  : " <<  MinValueIn(arrayFloat, sizeArray) << endl;
          break;

      case 4:
          cout << "Maximum value of the array : " << endl;
          cout << "int    : " << MaxValueIn(arrayInt, sizeArray) << endl;
          cout << "double : " << MaxValueIn(arrayDouble, sizeArray) << endl;
          cout << "float  : " << MaxValueIn(arrayFloat, sizeArray) << endl;
          break;

      case 5:
          cout << "5.Perform a cyclic shift of the array by a specified number of elements to left : " << endl;
          
         arr=ShiftLeft(arrayInt, sizeArray);
         cout << endl;
          for (int i = 0; i < sizeArray; i++) 
          {
              cout << arr[i]<<"\t";
          }
       /*   cout << ShiftLeft(arrayInt, sizeArray) << endl*/;
          break;
         
      case 6:
          cout << "6.Perform a cyclic shift of the array by a specified number of elements to right :" << endl;
          ShiftRight(arrayInt, sizeArray);
          break;

      case 7:
          cout << "7.Sort the array through Bubble sorting :" << endl;
          Sort(arrayInt,  sizeArray);
          break;

      case 8:
          UinqueRand(arrayInt, sizeArray);
          break;

      case 9:
          cout << "9.Find dublicate values in the array and display them on the screen " << endl;
          Search(arrayInt, sizeArray);
          break;

      default:
          break;
     }


    delete[] arrayInt;
    delete[] arrayDouble;
    delete[] arrayFloat;
    delete[] arrayChar;
}



void FillRand(int* array, int minValue, int maxValue, const int sizeArray)
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

void FillRand(double* array, double minValue, double maxValue, const int sizeArray)
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

        array[i] = rand() * float((maxValue - minValue) + minValue);
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

void Print(int* array, const int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }

}
void Print(double* array, const int  sizeArray) //выводит массив на экран
{

    for (int i = 0; i < sizeArray; i++)
    {

        cout << array[i] << "\t";
    }

}

void Print(float* array, const int  sizeArray) //выводит массив на экран
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

int  Sum(int* array, int sizeArray) //возвращает сумму элементов массива
{
    int sum = 0;
    for (int i = 0; i < sizeArray; i++) 
    
    
        sum += array[i];


        return sum;
}

double  Sum(double* array, int sizeArray) //возвращает сумму элементов массива
{
    double sum = 0.0;
    for (int i = 0; i < sizeArray; i++)

    sum += array[i];


    return sum;

}

float  Sum(float* array, int sizeArray) //возвращает сумму элементов массива
{
    float sum = 0.0f;
    for (int i = 0; i < sizeArray; i++)

        sum += array[i];


    return sum;

}



int Avg(int* array, int sizeArray) //возвращает среднее-арифметическое элементов массива
{

    int temp = 0;
    int sumElemnts = 0;
    for (int i = 0; i < sizeArray; i++)
    {
        temp += array[i];
        sumElemnts = temp / sizeArray;
    }

    return sumElemnts;

}

double Avg(double* array, int sizeArray) //возвращает среднее-арифметическое элементов массива
{

    double temp = 0.0;
    double sumElemnts = 0.0;
    for (int i = 0; i < sizeArray; i++)
    {
        temp += array[i];
        sumElemnts = temp / sizeArray;
    }

    return sumElemnts;

}

float Avg(float* array, int sizeArray) //возвращает среднее-арифметическое элементов массива
{

    float temp = 0.0;
    float sumElemnts = 0.0;
    for (int i = 0; i < sizeArray; i++)
    {
        temp += array[i];
        sumElemnts = temp / sizeArray;
    }

    return sumElemnts;

}


int MinValueIn(int* array, int sizeArray) //возвращает минимальное значение из массива
{

    int minElement = array[0];
    int cell = 0;
    for (int i = 0; i < sizeArray; i++)
    {

        if (array[i] < minElement)
        {
            cell = i;
            minElement = array[cell];
        }
    }

    return minElement;
}

double MinValueIn(double* array, int sizeArray) //возвращает минимальное значение из массива
{

    double minElement = array[0];
    int cell = 0;
    for (int i = 0; i < sizeArray; i++)
    {

        if (array[i] < minElement)
        {
            cell = i;
            minElement = array[cell];
        }
    }

    return minElement;
}

float MinValueIn(float* array, int sizeArray) //возвращает минимальное значение из массива
{

    float minElement = array[0];
    int cell = 0;
    for (int i = 0; i < sizeArray; i++)
    {

        if (array[i] < minElement)
        {
            cell = i;
            minElement = array[cell];
        }
    }

    return minElement;
}





int MaxValueIn(int* array, int sizeArray) //возвращает максимальное значение из массива
{

    int maxElement = array[0];
    int cell;
    for (int i = 0; i < sizeArray; i++)
    {
        if (array[i] > maxElement)
        {
            cell = i;
            maxElement = array[i];

        }
    }
    return maxElement;
}


double MaxValueIn(double* array, int sizeArray) //возвращает максимальное значение из массива
{

    double maxElement = array[0];
    int cell;
    for (int i = 0; i < sizeArray; i++)
    {
        if (array[i] > maxElement)
        {
            cell = i;
            maxElement = array[i];

        }
    }
    return maxElement;
}
float MaxValueIn(float* array, int sizeArray) //возвращает максимальное значение из массива
{

    float maxElement = array[0];
    int cell;
    for (int i = 0; i < sizeArray; i++)
    {
        if (array[i] > maxElement)
        {
            cell = i;
            maxElement = array[i];

        }
    }
    return maxElement;

}



int* ShiftLeft(int* array, int sizeArray) //выполняет циклический сдвиг массива на заданное число элементов влево
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
    
    return array;


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
    cout << "Performans a ciclic shift of the array by a specified number of elements to the righr ";
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
    int type = 0;

    for (int i = 0; i < sizeArray; i++)
    {
        for (int j = 0; j < sizeArray; j++)
        {

            if (i >= j)
            {
                continue;
            }
            if (array[i] == array[j])
            {
                for (int z = 0; z < i; z++)
                {
                    if (array[z] == array[i])
                    {
                        type = 1;
                        break;
                    }
                }
                if (type == 0)
                {
                    cout << array[i] << " ";
                    break;
                }


            }

        }
    }
}