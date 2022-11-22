// RecursionFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int RecursionFactorial(int number); //Написать рекурсивную функцию, которая принимает число, и возвращает Факториал этого числа;

int RecursionDegree(int number, int Degree);//Написать Рекурсивную функцию, которая возводит число в степень;

int RecursionFibonacciMember(int number); //Написать рекурсивную функцию, которая выводит на экран заданное количество членов из ряда Фибоначчи;

int RecursionFibonacciLimit(int number);//написать рекурсивную функцию, которая выводит на экран ряд Фибоначчи до заданного предела;

int main()
{
	int i = 0;
	int valueFactorial, number, deegre, numberMembers, numberLimit;

	cout <<"1.Enter the factorial of the number: "; cin >> valueFactorial;

	cout << valueFactorial <<"! = " << RecursionFactorial(valueFactorial) << endl;
	cout << endl;

	cout <<"2.Exponentiation of a number" << endl;
	cout <<"Enter a number: "; cin >> number;   
	cout <<"Enter a deegre: "; cin >> deegre; 

	cout << number<<" ^ "<< deegre << " = " << RecursionDegree(number, deegre) << endl;
	cout << endl;

	cout <<"3. Output a recursive function that displays a given number of terms from the Fibboncci series" << endl;
	cout << "Enter numbers of members: "; cin >> numberMembers;

	while ( i <= numberMembers) 
	{
		cout << RecursionFibonacciMember(i) <<"\t";
		i++;
	}
	cout << endl;

	cout << "4.Output recursive function that displays a Fibonacci series up to given limit" << endl;
	cout << "Enter numbers of limit: "; cin >> numberLimit;
	
	for (int j = 0; j <= numberLimit; j++)
	{
		if (RecursionFibonacciLimit(j) <= numberLimit)
		{
			cout<< RecursionFibonacciLimit(j) << "\t";
		}
	}	
}

int RecursionFactorial(int number) //Написать рекурсивную функцию, которая принимает число, и возвращает Факториал этого числа;
{
	if (number == 0)
	   return 1;

	return number * RecursionFactorial(number - 1);
}

int RecursionDegree(int number, int degree)//Написать Рекурсивную функцию, которая возводит число в степень;
{
	if (number == 0)
	   return 0;

	return number * pow(number, degree - 1);
}

int  RecursionFibonacciMember(int number) //Написать рекурсивную функцию, которая выводит на экран заданное количество членов из ряда Фибоначчи;
{
	if (number == 0)
	   return 0;
	if (number == 1)
	   return 1;

	return RecursionFibonacciMember(number - 1) + RecursionFibonacciMember(number - 2);
}

int RecursionFibonacciLimit(int number)//аписать рекурсивную функцию, которая выводит на экран ряд Фибоначчи до заданного предела;
{

	if (number == 0)
	   return 0;
	if (number == 1)
	   return 1;

	return RecursionFibonacciMember(number - 1) + RecursionFibonacciMember(number - 2);
}