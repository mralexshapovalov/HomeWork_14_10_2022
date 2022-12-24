#include <iostream>
using namespace std;

//1. В Solution Functions добавить проект Arrays, и в нем реализовать следующие функции :
//? ? ? FillRand(? ? ? );	//заполняет массив случайными числами в заданном диапазоне	DONE
////(диапазон по умолчанию от 0 до 100)
//? ? ? Print(? ? ? );		//выводит массив на экран									DONE
//? ? ? Sum(? ? ? );		//ВОЗВРАЩАЕТ сумму элементов массива						DONE
//? ? ? Avg(? ? ? );		//ВОЗВРАЩАЕТ среднее-арифметическое элементов массива		DONE
//? ? ? minValueIn(? ? ? );//возвращает минимальное значение из массива				DONE
//? ? ? maxValueIn(? ? ? );//возвращает максимальное значение из массива				DONE
//
//? ? ? shiftLeft(? ? ? );	//выполняет циклический сдвиг массива на заданное число элементов влево		DOME
//? ? ? shiftRight(? ? ? );//выполняет циклический сдвиг массива на заданное число элементов вправо	DOME
//? ? ? Sort(? ? ? );		//выполняет сортировку массива в порядке возрастания		DONE
//? ? ? UniqueRand(? ? ? );//заполняет массив уникальными случайными числами в заданном диапазоне
//? ? ? Search(? ? ? );	//находит в массиве повторяюшиеся значения, выводит их на экран,
////и выводит на экран количество повторений
void FillRand(int arr[], const int n, int minRand, int maxRand);
int** allocate(const int rows, const int cols);

void clear(int** arr, const int rows);

void FillRand(int** arr, const int rows, const int cols);

void Print(int** arr, const int rows, int cols);

int** push_row_back(int** arr, int& rows, const int cols);

int** push_row_front(int** arr, int& rows, const int cols);

int** insert(int** arr, int& rows, const int cols, const int index);

int** pop_row_bac(int** arr, int& rows);

int** pop_row_front(int** arr, int& rows);

int** erase_row(int** arr, int& rows, const int cols,int index);

void push_col_back(int** arr, const int rows, int& cols);

#define tab "\t"
#define line "----------------------------------------------------------------------"
int main()
{
    int rows = 5;
    int cols = 5;

    int** arr = allocate(rows, cols);

    FillRand(arr, rows, cols);
    Print(arr, rows, cols);

    cout << line << endl;
    cout <<"Adding a new line to the beginning"<< endl;
    arr = push_row_front(arr, rows, cols);
    Print(arr, rows, cols);
  

    cout << line << endl;
    cout << "Adding a new line in to the end" << endl;
    arr = push_row_back(arr, rows, cols);
    Print(arr, rows, cols);
 

    cout << line << endl;
    cout << "Adding a row by index" << endl;
    arr = insert(arr, rows, cols,3);
    Print(arr, rows, cols);


    cout << line << endl;
    cout <<"Deleting a row by index"<< endl;
    arr = erase_row(arr, rows,cols,2);
    Print(arr, rows, cols);

    cout << line << endl;
    cout << "Deleting the last line" << endl;
    arr = pop_row_bac(arr, rows);
    Print(arr, rows, cols);

    cout << line << endl;
    cout <<"Deleting the first line" << endl;
    arr = pop_row_front(arr, rows);
    Print(arr, rows, cols);
  

   

    clear(arr, rows);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
    cout << typeid(arr).name() << endl;
    for (int i = 0; i < n; i++)
    {
   
        *(arr + i) = rand() % (maxRand - minRand) + minRand;
    }
}

int** allocate(const int rows, const int cols)
{
    int** arr = new int* [rows];

    for (int i = 0; i < rows; i++) {

        arr[i] = new int[cols];
    }

    return arr;
}

void clear(int** arr, const int rows)
{
    for (int i = 0; i < rows; i++) 
    {

        delete[]arr[i];
    }

    delete[]arr;
}

void FillRand(int** arr, const int rows, const int cols) 
{
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++)
        {

            arr[i][j] = rand() % 100;
        }
    }
}

void Print(int** arr, const int rows, int cols) 
{
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int** push_row_back(int** arr, int& rows, const int cols)
{
  
    int** buffer = new int* [rows + 1];

    for (int i = 0; i < rows; i++) 
    {
        buffer[i] = arr[i];
    }

    delete[]arr;
    arr = buffer;
    buffer[rows] = new int[cols] {};
    rows++;


    return arr;
}

int** push_row_front(int** arr, int& rows, const int cols)
{
    int** buffer = new int* [rows + 1];

    for (int i = 0; i < rows; i++)  buffer[i + 1] = arr[i];

    delete[]arr;
    arr = buffer;
    arr[0] = new int[cols] {};

    rows++;

    return arr;
}

int** pop_row_bac(int** arr, int& rows)
{
    delete[] arr[rows - 1];
    int** buffer = new int* [--rows];

    for (int i = 0; i < rows; i++)
    {
        buffer[i] = arr[i];
    }

    delete[]arr;
    return buffer;
}

int** pop_row_front(int** arr, int& rows)
{
    delete[] arr[0];
    int** buffer = new int* [rows-1];

    for (int i = 0; i < rows; i++)
    {
        buffer[i] = arr[i+1];
    }

    delete[]arr;
    rows--;
    return buffer;
}

int** erase_row(int** arr, int& rows, const int cols,int index)
{
    int** buffer = new int* [rows ];

    for (int i = 0; i < rows; i++) buffer[i] = arr[i];

    for (int j = index; j < rows-1; j++)buffer[j ] = arr[j+1];

    delete[] arr;

    arr = buffer;

    rows--;

    return arr;

}

int** insert(int** arr, int& rows, const int cols, const int index)
{

    int** buffer = new int* [rows + 1];

    for (int i = 0; i < index; i++) buffer[i] = arr[i];

    for (int i = index; i < rows; i++)buffer[i + 1] = arr[i];

    delete[] arr;

    arr = buffer;

    arr[index] = new int[cols] {};

    rows++;

    return arr;
}

void push_col_back(int** arr, const int rows, int& cols) 
{

    for (int i = 0; i < rows; i++) {

        int* buffer = new int[cols + 1] {};

        for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
        delete[] arr[i];
        arr[i] = buffer;

    }
    cols++;
}
