#include<iostream>
#include<fstream>			
#include<Windows.h>
#include<locale.h>


// VladimirOrlovA /HomeWork_15_03_2019_1552662745

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


using namespace std;

void Task1()
{
	/* 1.	**ќписать структуру ќ«” (фирма, частота, объем). —оздать массив экземпл€ров структуры ќ«” и написать программу, 
	позвол€ющую:
- динамически измен€ть размер массива;
- выводить список пам€ти с частотой больше заданной;
- выводить список пам€ти с объемом больше заданного;
*/

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask1\n\n";
	SetConsoleTextAttribute(hConsole, 7);


}

void Task2()
{
	/*2.	**ќписать структуру ќдежда (цвет, размер, длина). —оздать массив экземпл€ров структуры ќдежда и написать программу, 
	позвол€ющую:
- динамически измен€ть размер массива;
- выводить список одежды  с размером больше или равно заданным;
- выводить список одежды с длиной больше или равно заданной;
*/

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask2\n\n";
	SetConsoleTextAttribute(hConsole, 7);



}


int main()
{
	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n Orlov Vladimir HomeWork_15_03_2019_1552662745 \n\n";
	SetConsoleTextAttribute(hConsole, 7);

	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/

	setlocale(LC_ALL, "");

	int number;
	char flag;

	do
	{
		cout << endl << "Enter number of Task (1) to (2) => ";
		cin >> number;

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;

		default: cout << "\nEntered number of Task does not exist...\n\n";

		}

		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n--------------------------------------------------------------------------\n\n";
		SetConsoleTextAttribute(hConsole, 7);

		cout << "Do you want to continue? \n\nIf YES press (y) if NO press any keys => ";
		cin >> flag;

	} while (flag == 'y');
}