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
 
using namespace std;

int running(string input) {
	if (input == "cole") {
		cout << "Thank you for mentioning the name of this program's creator.\n";
	}
	else if (input == "visual_basic") {
		system("~/Scripts/ms-code/code");
	}
	return 0;
}
int loop_exit(bool exit_test) {
	exit_test = false;
	return exit_test;
	return 0;
}
int main()
{
	bool exit_test;
	exit_test = true;
	system("$MALIA_HOME/init.sh");
	string welcome;
	welcome = "user@malia >> ";
	while (true) {
		string input;
		cout << welcome;
		cin >> input;
		if (input == "exit") {
			loop_exit(exit_test);
			return exit_test;
		}
		else if (input == "bye") {
			loop_exit(exit_test);
			return exit_test;
		}
		else {
			running(input);
		}
	}
}
