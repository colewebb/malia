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
	ifstream db_read;
	bool cmd_found = false;
	string db = "$MALIA_HOME/db.txt";
	db_read.open(db.c_str());
	/* Somewhere in here, searching for the command needs to happen.
	 * If the command is found, then set cmd_found to true and execute the command.
	 * If the command isn't found, then leave cmd_found equal to false and send the
	 * input to the system to execute. */
	if (cmd_found == true) {
		cout << "File found\n";
	}
	else {
		system(input.c_str());
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
