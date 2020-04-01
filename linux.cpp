// RealityHacker@gmail.com 

﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <fcntl.h>
#include <string>
#include "kbhit.h"
#include "getch.h"

using namespace std;

int main() {

	string file;
	cout << "   	                                                       " << endl;
	cout << "   ▓█████▄  ▄▄▄      ▓█████  ███▄ ▄███▓ ▒█████   ███▄    █ " << endl;
	cout << "   ▒██▀ ██▌▒████▄    ▓█   ▀ ▓██▒▀█▀ ██▒▒██▒  ██▒ ██ ▀█   █ " << endl;
	cout << "   ░██   █▌▒██  ▀█▄  ▒███   ▓██    ▓██░▒██░  ██▒▓██  ▀█ ██▒" << endl;
	cout << "   ░▓█▄   ▌░██▄▄▄▄██ ▒▓█  ▄ ▒██    ▒██ ▒██   ██░▓██▒  ▐▌██▒" << endl;
	cout << "   ░▒████▓  ▓█   ▓██▒░▒████▒▒██▒   ░██▒░ ████▓▒░▒██░   ▓██░" << endl;
	cout << "    ▒▒▓  ▒  ▒▒   ▓▒█░░░ ▒░ ░░ ▒░   ░  ░░ ▒░▒░▒░ ░ ▒░   ▒ ▒ " << endl;
	cout << "    ░ ▒  ▒   ▒   ▒▒ ░ ░ ░  ░░  ░      ░  ░ ▒ ▒░ ░ ░░   ░ ▒░" << endl;
	cout << "    ░ ░  ░   ░   ▒      ░   ░      ░   ░ ░ ░ ▒     ░   ░ ░ " << endl;
	cout << "      ░          ░  ░   ░  ░       ░       ░ ░           ░ " << endl;
	cout << "    ░                                                      " << endl;
	cout << "    ░  Calculating 666                                     " << endl;
	cout << "                                                           " << endl;
	cout << "                                              (Esc to quit)" << endl;
	cout << endl;

	char Wait = getch();
	if (Wait == 27) return 0;
	cout << "(Leave blank for none)"<<endl;
	cout << "Enter file to write to: ";
	getline(cin, file);
	fflush(stdin);
	srand((unsigned)time(0));
	ofstream TheBeast(file);
	int Daemon = 666;
	int count = 0;
	while (666) {

		Daemon = (rand() % 666) + 1;
	
		if (Daemon == 666) {
            if(count == 666) count = 0;
		    count++;
			time_t curr_time;
			time(&curr_time);
			if(count < 10) cout << "   00"<< count << " ::: " << Daemon << " :::  " << asctime(localtime(&curr_time)) << endl;
            else if(count < 100) cout << "   0"<< count << " ::: " << Daemon << " :::  " << asctime(localtime(&curr_time)) << endl;
            else  cout << "   "<< count << " ::: " << Daemon << " :::  " << asctime(localtime(&curr_time)) << endl;
			
            if (TheBeast) TheBeast << count << " ::: " << Daemon << " ::: " << asctime(localtime(&curr_time)) << endl;

			if (kbhit()) {
				Wait = getch();								
				if (Wait == 27) return 0; // Escape key exits.
				    cout << "   Continue... (Esc to quit.)" << endl;
                    Wait = getch();
                    if (Wait == 27) return 0;
			}
		}
	}
	TheBeast.close();
	return 0;
}
