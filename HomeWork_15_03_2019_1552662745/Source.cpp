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
		cout << i + 1 << " - ������ ������ \n";
		cout << "����� - \t" << ss[i].brend << endl;
		cout << "������� - \t" << ss[i].clock << endl;
		cout << "����� - \t" << ss[i].volume << endl;
		cout << endl;
	}
	cout << endl;
}

void searchRAMonParameter(RAM *ss, int n)
{
	cout << "����� ������ ������ �� ���������, �� � ���� \n";
	cout << "������� -> ";
	int pclock;
	cin >> pclock;
	
	cout << "����� -> ";
	int pvolume;
	cin >> pvolume;

	int fpclock = 0;
	int fpvolume = 0;

	cout << "\n ��������� ������ �� ������� >=" << pclock;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].clock >= pclock)
		{
			cout << i + 1 << " - ������ ������ \n";
			cout << "����� - \t" << ss[i].brend << endl;
			cout << "������� - \t" << ss[i].clock <<" - !!! -"<< endl;
			cout << "����� - \t" << ss[i].volume << endl;
			cout << endl;
			fpclock++;
		}
	}
	if (fpclock==0) cout << " ������ �� �������\n\n\n";
	else cout << "������� " << fpclock << endl << endl;

	cout << "\n ��������� ������ �� ������ >=" << pvolume;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].volume >= pvolume)
		{
			cout << i + 1 << " - ������ ������ \n";
			cout << "����� - \t" << ss[i].brend << endl;
			cout << "������� - \t" << ss[i].clock << endl;
			cout << "����� - \t" << ss[i].volume << " - !!! -" << endl;
			cout << endl;
			fpvolume++;
		}
	}
	if (fpvolume == 0) cout << " ������ �� �������\n\n\n";
	else cout << "������� " << fpvolume << endl << endl;
}

void Task1()
{
	/* 1.	**������� ��������� ��� (�����, �������, �����). ������� ������ ����������� ��������� ��� � �������� ���������, 
	�����������:
- ����������� �������� ������ �������;
- �������� ������ ������ � �������� ������ ��������;
- �������� ������ ������ � ������� ������ ���������;
*/

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask1\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	int n;
	cout << "������� ���-�� ������� ������ RAM -> ";
	cin >> n;
	
	RAM *ss;
	ss = new RAM[n];

	cout << "\n���� ������ �� ������� ������ RAM \n\n";

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " - ������ ������ \n";

		cout << "�����: ";
		cin >> ss[i].brend;

		cout << "�������: ";
		cin >> ss[i].clock;

		cout << "�����: ";
		cin >> ss[i].volume;

		cout << endl;

	}

	//print(ss, n);
	
	searchRAMonParameter(ss, n);

	

}

struct �lothes
{
	char color[10];
	int size;
	int length;
};

void print(�lothes *ss, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " �������� ������ � " << i + 1 << endl;
		cout << "���� - \t" << ss[i].color << endl;
		cout << "������ - \t" << ss[i].size << endl;
		cout << "����� - \t" << ss[i].length << endl;
		cout << endl;
	}
	cout << endl;
}

void searh�lothesOnParameter(�lothes *ss, int n)
{
	cout << "����� ���������� ������ �� ���������, �� � ���� \n";
	cout << "������ -> ";
	int psize;
	cin >> psize;

	cout << "����� -> ";
	int plength;
	cin >> plength;

	int fpsize = 0;
	int fplength = 0;

	cout << "\n ��������� ������ �� ������� >=" << psize;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].size >= psize)
		{
			cout << " �������� ������ � " << i + 1 << endl;
			cout << "���� - \t" << ss[i].color << endl;
			cout << "������ - \t" << ss[i].size << " ��������!" << endl;
			cout << "����� - \t" << ss[i].length << endl;
			cout << endl;
			fpsize++;
		}
	}
	if (fpsize == 0) cout << " ������ �� �������\n\n\n";
	else cout << "������� " << fpsize << endl << endl;

	cout << "\n ��������� ������ �� ����� >=" << plength;
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		if (ss[i].length >= plength)
		{
			cout << " �������� ������ � " << i + 1 << endl;
			cout << "���� - \t" << ss[i].color << endl;
			cout << "������ - \t" << ss[i].size << endl;
			cout << "����� - \t" << ss[i].length << " ��������!" << endl;
			cout << endl;
			fplength++;
		}
	}
	if (fplength == 0) cout << " ������ �� �������\n\n\n";
	else cout << "������� " << fplength << endl << endl;
}

void Task2()
{
	/*2.	**������� ��������� ������ (����, ������, �����). ������� ������ ����������� ��������� ������ � �������� ���������, 
	�����������:
- ����������� �������� ������ �������;
- �������� ������ ������  � �������� ������ ��� ����� ��������;
- �������� ������ ������ � ������ ������ ��� ����� ��������;
*/

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask2\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	int n;
	cout << "������� ���-�� ����������� ������ -> ";
	cin >> n;

	�lothes *ss;
	ss = new �lothes[n];

	for (int i = 0; i < n; i++)
	{
		cout << "������� ��������� ������ � " << i + 1 << endl;

		cout << "����: ";
		cin >> ss[i].color;

		cout << "������: ";
		cin >> ss[i].size;

		cout << "�����: ";
		cin >> ss[i].length;

		cout << endl;

	}

	searh�lothesOnParameter(ss, n);
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