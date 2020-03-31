#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include <io.h>
#include <fcntl.h>
#include <string>

using namespace std;

int main()
{

_setmode(_fileno(stdout), _O_U16TEXT);
wcout << L"   	                                                       " << endl;
wcout << L"   ▓█████▄  ▄▄▄      ▓█████  ███▄ ▄███▓ ▒█████   ███▄    █ " << endl;
wcout << L"   ▒██▀ ██▌▒████▄    ▓█   ▀ ▓██▒▀█▀ ██▒▒██▒  ██▒ ██ ▀█   █ " << endl;
wcout << L"   ░██   █▌▒██  ▀█▄  ▒███   ▓██    ▓██░▒██░  ██▒▓██  ▀█ ██▒" << endl;
wcout << L"   ░▓█▄   ▌░██▄▄▄▄██ ▒▓█  ▄ ▒██    ▒██ ▒██   ██░▓██▒  ▐▌██▒" << endl;
wcout << L"   ░▒████▓  ▓█   ▓██▒░▒████▒▒██▒   ░██▒░ ████▓▒░▒██░   ▓██░" << endl;
wcout << L"    ▒▒▓  ▒  ▒▒   ▓▒█░░░ ▒░ ░░ ▒░   ░  ░░ ▒░▒░▒░ ░ ▒░   ▒ ▒ " << endl;
wcout << L"    ░ ▒  ▒   ▒   ▒▒ ░ ░ ░  ░░  ░      ░  ░ ▒ ▒░ ░ ░░   ░ ▒░" << endl;
wcout << L"    ░ ░  ░   ░   ▒      ░   ░      ░   ░ ░ ░ ▒     ░   ░ ░ " << endl;
wcout << L"      ░          ░  ░   ░  ░       ░       ░ ░           ░ " << endl;
wcout << L"    ░                                                      " << endl;
wcout << L"    ░  Calculating 666                                     " << endl;
wcout << L"                                                           " << endl;
wcout << L"                                              (Esc to quit)" << endl;
wcout << endl;

string file;
wcout << L"Enter file to write to: ";
cin >> file;
fflush(stdin);

	srand((unsigned)time(0));
	ofstream TheBeast(file);
	int Daemon = 666;
	while (666) {		
		Sleep(0);
		Daemon = (rand() % 666) + 1;
		if (Daemon == 666) {			
			time_t curr_time;
			time(&curr_time);
			wcout << "   " << Daemon << " :::  "<< asctime(localtime(&curr_time)) << endl;
			TheBeast << Daemon << " ::: " << asctime(localtime(&curr_time)) << endl;
			if (_kbhit())
			{
				char Wait = _getch();
				system("pause");
				if (Wait == 27) break; // Escape key exits
				fflush(stdin);
			}
		}

	}
	return 0;
}