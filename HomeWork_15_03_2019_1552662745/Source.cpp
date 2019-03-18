#include<iostream>
#include<fstream>			
#include<Windows.h>
#include<locale.h>


// VladimirOrlovA /HomeWork_15_03_2019_1552662745

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


using namespace std;

struct RAM
{
	char brend;
	int clock;
	int volume;
};

void print(RAM *ss, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " - модуль памяти \n";
		cout << "Фирма - \t" << ss[i].brend << endl;
		cout << "Частота - \t" << ss[i].clock << endl;
		cout << "Объем - \t" << ss[i].volume << endl;
		cout << endl;
	}
	cout << endl;
}

void searchRAMonParameter(RAM *ss, int n)
{
	cout << "Поиск модуля памяти по параметру, от и выше \n";
	cout << "частота -> ";
	int pclock;
	cin >> pclock;
	
	cout << "объем -> ";
	int pvolume;
	cin >> pvolume;

	int fpclock = 0;
	int fpvolume = 0;

	cout << "\n результат поиска по частоте >=" << pclock;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].clock >= pclock)
		{
			cout << i + 1 << " - модуль памяти \n";
			cout << "Фирма - \t" << ss[i].brend << endl;
			cout << "Частота - \t" << ss[i].clock <<" - !!! -"<< endl;
			cout << "Объем - \t" << ss[i].volume << endl;
			cout << endl;
			fpclock++;
		}
	}
	if (fpclock==0) cout << " ничего не найдено\n\n\n";
	else cout << "найдено " << fpclock << endl << endl;

	cout << "\n результат поиска по объему >=" << pvolume;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].volume >= pvolume)
		{
			cout << i + 1 << " - модуль памяти \n";
			cout << "Фирма - \t" << ss[i].brend << endl;
			cout << "Частота - \t" << ss[i].clock << endl;
			cout << "Объем - \t" << ss[i].volume << " - !!! -" << endl;
			cout << endl;
			fpvolume++;
		}
	}
	if (fpvolume == 0) cout << " ничего не найдено\n\n\n";
	else cout << "найдено " << fpvolume << endl << endl;
}

void Task1()
{
	/* 1.	**Описать структуру ОЗУ (фирма, частота, объем). Создать массив экземпляров структуры ОЗУ и написать программу, 
	позволяющую:
- динамически изменять размер массива;
- выводить список памяти с частотой больше заданной;
- выводить список памяти с объемом больше заданного;
*/

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask1\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	int n;
	cout << "Введите кол-во модулей памяти RAM -> ";
	cin >> n;
	
	RAM *ss;
	ss = new RAM[n];

	cout << "\nВвод данных по модулям памяти RAM \n\n";

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " - модуль памяти \n";

		cout << "Фирма: ";
		cin >> ss[i].brend;

		cout << "Частота: ";
		cin >> ss[i].clock;

		cout << "Объем: ";
		cin >> ss[i].volume;

		cout << endl;

	}

	//print(ss, n);
	
	searchRAMonParameter(ss, n);

	

}

struct Сlothes
{
	char color[10];
	int size;
	int length;
};

void print(Сlothes *ss, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " Экземляр одежды № " << i + 1 << endl;
		cout << "Цвет - \t" << ss[i].color << endl;
		cout << "Размер - \t" << ss[i].size << endl;
		cout << "Длина - \t" << ss[i].length << endl;
		cout << endl;
	}
	cout << endl;
}

void searhСlothesOnParameter(Сlothes *ss, int n)
{
	cout << "Поиск экземпляра одежды по параметру, от и выше \n";
	cout << "размер -> ";
	int psize;
	cin >> psize;

	cout << "длина -> ";
	int plength;
	cin >> plength;

	int fpsize = 0;
	int fplength = 0;

	cout << "\n результат поиска по размеру >=" << psize;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].size >= psize)
		{
			cout << " Экземляр одежды № " << i + 1 << endl;
			cout << "Цвет - \t" << ss[i].color << endl;
			cout << "Размер - \t" << ss[i].size << " подходит!" << endl;
			cout << "Длина - \t" << ss[i].length << endl;
			cout << endl;
			fpsize++;
		}
	}
	if (fpsize == 0) cout << " ничего не найдено\n\n\n";
	else cout << "найдено " << fpsize << endl << endl;

	cout << "\n результат поиска по длине >=" << plength;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].length >= plength)
		{
			cout << " Экземляр одежды № " << i + 1 << endl;
			cout << "Цвет - \t" << ss[i].color << endl;
			cout << "Размер - \t" << ss[i].size << endl;
			cout << "Длина - \t" << ss[i].length << " подходит!" << endl;
			cout << endl;
			fplength++;
		}
	}
	if (fplength == 0) cout << " ничего не найдено\n\n\n";
	else cout << "найдено " << fplength << endl << endl;
}

void Task2()
{
	/*2.	**Описать структуру Одежда (цвет, размер, длина). Создать массив экземпляров структуры Одежда и написать программу, 
	позволяющую:
- динамически изменять размер массива;
- выводить список одежды  с размером больше или равно заданным;
- выводить список одежды с длиной больше или равно заданной;
*/

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask2\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	int n;
	cout << "Введите кол-во экземпляров одежды -> ";
	cin >> n;

	Сlothes *ss;
	ss = new Сlothes[n];

	for (int i = 0; i < n; i++)
	{
		cout << "введите параметры одежды № " << i + 1 << endl;

		cout << "Цвет: ";
		cin >> ss[i].color;

		cout << "Размер: ";
		cin >> ss[i].size;

		cout << "Длина: ";
		cin >> ss[i].length;

		cout << endl;

	}

	searhСlothesOnParameter(ss, n);
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