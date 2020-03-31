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

int main() {

	string file;
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

	char Wait = _getch();
	if (Wait == 27) return 0;
	wcout << L"(Leave blank for none)"<<endl;
	wcout << L"Enter file to write to: ";
	getline(cin, file);
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
			wcout << "   " << Daemon << " :::  " << asctime(localtime(&curr_time)) << endl;

			if (TheBeast) TheBeast << Daemon << " ::: " << asctime(localtime(&curr_time)) << endl;

			if (_kbhit()) {
				Wait = _getch();								
				if (Wait == 27) return 0; // Escape key exits.
				else system("pause"); // Any other key pauses.
			}
		}
	}
	TheBeast.close();
	return 0;
}