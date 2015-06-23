/*

 Malia - Command line enhanced shell and content management system.
    Copyright (C) 2015  Cole Webb

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
 
using namespace std;

int running(string input) {
	ofstream db ("db.txt");
	if (input == "cole") {
		cout << "Thank you for mentioning the name of this program's creator.\n";
	}
	else if (input == "visual-basic") {
		system("~/Scripts/ms-code/code");
	}
/*	else if (input == "help") {
		string line;
		ifstream help_file ("help.txt");
		getline  (help_file, line);
		cout << help_file;
	}
*/
	else {
/*		const char* system_input;
		input = const char* input;
		system_input = input;
		system(system_input); 
*/
		cout << "I don't know what you mean by that.\n";
	}
	return 0;
}
int loop_exit(bool exit_test) {
	exit_test = false;
	return exit_test;
	int exit_status = 0;
	return exit_status;
	return 0;
}
int main()
{
	bool exit_test = true;
	system("$MALIA_HOME/init.sh");
	string welcome = "user@malia >> ";
	ofstream db ("db.txt");
	while (true) {
		string input;
		cout << welcome;
		cin >> input;
		if (input == "exit") {
			loop_exit(exit_test);
			return 0;
		}
		else if (input == "bye") {
			loop_exit(exit_test);
			return 0;
		}
		else {
			running(input);
		}
	}
}
